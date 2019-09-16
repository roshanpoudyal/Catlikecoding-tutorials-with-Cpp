#include <OgreRoot.h>

class TutorialApplication {
public:
  TutorialApplication();
  virtual ~TutorialApplication();

  bool go();

private:
  Ogre::Root *mRoot;
  Ogre::String mResourcesCfg;
  Ogre::String mPluginsCfg;
};