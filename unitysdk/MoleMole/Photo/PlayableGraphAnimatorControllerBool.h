#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAnimatorControllerSingleParameter.h"
#include "unitysdk/FOKCLNLNMPD.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x14B14CE0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x14B14DC0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerBool_TypeDefinitionIndex = 84738;

	class PlayableGraphAnimatorControllerBool : public ::MoleMole::Photo::PlayableGraphAnimatorControllerSingleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL__CTOR_OFFSET))(this);
		}

		::FOKCLNLNMPD Instantiate(::UnityEngine::Animations::AnimatorControllerPlayable controller)
		{
			return ((::FOKCLNLNMPD(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERBOOL_INSTANTIATE_OFFSET))(this, controller);
		}
	};
}
