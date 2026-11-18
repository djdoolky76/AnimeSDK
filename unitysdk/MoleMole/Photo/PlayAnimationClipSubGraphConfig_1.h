#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class AnimationModifyCurveConfig; }
namespace MoleMole::Photo { class PlayableGraphClipConfig; }

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayAnimationClipSubGraphConfig_1_TypeDefinitionIndex = 69839;

	template <typename T>
	class PlayAnimationClipSubGraphConfig_1 : public ::System::Object
	{
	public:
		::MoleMole::Photo::PlayableGraphClipConfig* clip; // 0x0
		::MoleMole::Photo::AnimationModifyCurveConfig* curve; // 0x0
		::System::Single playRate; // 0x0
	};
}
