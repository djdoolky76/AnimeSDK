#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_CTOR_OFFSET UNITYSDK_OFFSET(0xD808B90)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD808AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xD808970)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD8088D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginRotate_RotateNode_TypeDefinitionIndex = 70106;

	class MonoEffectPluginRotate_RotateNode : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Node; // 0x10
		::UnityEngine::Space Space; // 0x18
		::System::Boolean FollowTimeScale; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Speed; // 0x20
		::System::Boolean IsRandomSpeed; // 0x2C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 RandomSpeedRangeMin; // 0x30
		::UnityEngine::Vector3 RandomSpeedRangeMax; // 0x3C
		::UnityEngine::Vector3 RuntimeSpeed; // 0x48
		::System::Boolean IsRandomOrigin; // 0x54
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 RandomOriginRangeMin; // 0x58
		::UnityEngine::Vector3 RandomOriginRangeMax; // 0x64
		::UnityEngine::Quaternion OriginRotation; // 0x70
		::UnityEngine::Vector3 EulerAngle; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
}
