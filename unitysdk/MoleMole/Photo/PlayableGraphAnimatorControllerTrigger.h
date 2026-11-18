#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/GLMBIOOIKHO.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x146A7AB0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x146A7B60)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerTrigger_TypeDefinitionIndex = 90805;

	class PlayableGraphAnimatorControllerTrigger : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER__CTOR_OFFSET))(this);
		}

		::GLMBIOOIKHO Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::GLMBIOOIKHO(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERTRIGGER_INSTANTIATE_OFFSET))(this, controller);
		}
	};
}
