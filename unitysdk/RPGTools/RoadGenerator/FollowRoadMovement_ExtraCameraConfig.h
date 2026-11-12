#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_EXTRACAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xF381C50)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int FollowRoadMovement_ExtraCameraConfig_TypeDefinitionIndex = 49917;

	class FollowRoadMovement_ExtraCameraConfig : public ::System::Object
	{
	public:
		::System::String* Alias; // 0x10
		::UnityEngine::GameObject* Prefab; // 0x18
		::System::Boolean BindAimTarget; // 0x20
		::System::Byte _padding0[0x3];
		::Cinemachine::CinemachineBlendDefinition_Style BlendType; // 0x24
		::System::Single BlendTime; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* Instance; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_EXTRACAMERACONFIG_CTOR_OFFSET))(this);
		}

	};
}
