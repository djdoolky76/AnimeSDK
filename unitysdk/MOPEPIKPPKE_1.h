#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class AnimationModifyCurveConfig; }
namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }

inline static constexpr unsigned int MOPEPIKPPKE_1_TypeDefinitionIndex = 78728;

template <typename T>
class MOPEPIKPPKE_1 : public ::System::Object
{
public:
	::MoleMole::Photo::PlayableBlendSpace1DConfig* blendSpace; // 0x0
	::MoleMole::Photo::AnimationModifyCurveConfig* curve; // 0x0
	::System::Single playRate; // 0x0
};
