#include "TutorialApplication.h"

#include <OgreException.h>

TutorialApplication::TutorialApplication()
    : mRoot(0), mResourcesCfg(Ogre::StringUtil::BLANK),
      mPluginsCfg(Ogre::StringUtil::BLANK) {}

TutorialApplication::~TutorialApplication() { delete mRoot; }

bool TutorialApplication::go() { return true; }

// MAIN FUNCTION OMITTED FOR NOW
