#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAttributeSource.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/LKEBCNKGCEA.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_APPLY_OFFSET UNITYSDK_OFFSET(0x12B86070)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_GETMULTIPLIERCURVENAME_OFFSET UNITYSDK_OFFSET(0x12B85FE0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B86420)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphFloatAttributeConfig_TypeDefinitionIndex = 50594;

	class PlayableGraphFloatAttributeConfig : public ::System::Object
	{
	public:
		::System::Single baseValue; // 0x10
		::MoleMole::Photo::PlayableGraphAttributeSource source; // 0x14
		::System::Single multiplierValue; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* multiplierProperty; // 0x20
		::System::Boolean blendShapeProperty; // 0x28
		::System::Byte _padding1[0x7];
		::PipelineCamera::SerializableHashString multiplierCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FName GetMultiplierCurveName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_GETMULTIPLIERCURVENAME_OFFSET))(this);
		}

		::System::Void Apply(::LKEBCNKGCEA& attribute, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::LKEBCNKGCEA&, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_APPLY_OFFSET))(this, attribute, animator);
		}
	};
}
