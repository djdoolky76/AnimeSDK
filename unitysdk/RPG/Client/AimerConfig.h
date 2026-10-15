#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC63C440)
#define RPG_CLIENT_AIMERCONFIG_GJOAHCNMGDL_OFFSET UNITYSDK_OFFSET(0xC63A7C0)
#define RPG_CLIENT_AIMERCONFIG_IENCPPOEFKI_OFFSET UNITYSDK_OFFSET(0xC63B310)
#define RPG_CLIENT_AIMERCONFIG_JDOKOEJLGEH_OFFSET UNITYSDK_OFFSET(0xC63A980)
#define RPG_CLIENT_AIMERCONFIG_OHEKBCCJNFJ_OFFSET UNITYSDK_OFFSET(0xC63BFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AimerConfig_TypeDefinitionIndex = 68490;

	class AimerConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Axis; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* AimTransform; // 0x20
		::System::Boolean AimOnBone; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 PitchUpLimit; // 0x2C
		::System::Int32 PitchDownLimit; // 0x30
		::UnityEngine::Vector3 ActualTarget; // 0x34
		::UnityEngine::Matrix4x4 AimRelativeMatrix; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void OHEKBCCJNFJ(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_OHEKBCCJNFJ_OFFSET))(this, a1);
		}

		::System::Void GJOAHCNMGDL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_GJOAHCNMGDL_OFFSET))(this, a1);
		}

		::System::Void JDOKOEJLGEH(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_JDOKOEJLGEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IENCPPOEFKI(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMERCONFIG_IENCPPOEFKI_OFFSET))(this, a1, a2, a3);
		}

	};
}
