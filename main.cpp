#include <Geode.hpp>

USE_GEODE_NAMESPACE();

CCLabelBMFont* g_atts;

class $modify(PlayLayer) {
	bool init(GJGameLevel* gj) {
		g_atts = CCLabelBMFont::create("Atts: ??", "bigFont.fnt");

		PlayLayer::init(gj);

		auto corner = CCDirector::sharedDirector()->getScreenTop();
		g_atts->setPosition(500 , corner - 35);
		g_atts->setScale(0.5);
		g_atts->setAnchorPoint({0, 0.5});
		g_atts->setOpacity(100);
		auto work = m_currentAttempt;
		char str[64];
		sprintf(str, "Atts: %0d", work);
		g_atts->setString(str);

		addChild(g_atts, 1000);

		return true;
	}

	void update(float dt) {
		PlayLayer::update(dt);
		auto work = m_currentAttempt;
		char str[64];
		sprintf(str, "Atts: %0d", work);
		g_atts->setString(str);
	}
};








