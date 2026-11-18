#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/FPlayableGraphAnimatorControllerParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GGBNFBKJAAH.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER_ONHFHGMLPHP_OFFSET UNITYSDK_OFFSET(0x12B85BC0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B85BB0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAnimatorControllerVector3Parameter_TypeDefinitionIndex = 67085;

	class PlayableGraphAnimatorControllerVector3Parameter : public ::System::Object
	{
	public:
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam x; // 0x10
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam y; // 0x20
		::MoleMole::Photo::FPlayableGraphAnimatorControllerParam z; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER__CTOR_OFFSET))(this);
		}

		::GGBNFBKJAAH ONHFHGMLPHP(::UnityEngine::Animations::AnimatorControllerPlayable NCIMBHDKIJM)
		{
			return ((::GGBNFBKJAAH(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHANIMATORCONTROLLERVECTOR3PARAMETER_ONHFHGMLPHP_OFFSET))(this, NCIMBHDKIJM);
		}
	};
}
