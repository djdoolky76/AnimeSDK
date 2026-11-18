#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMMOKIFNDK.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/NMIOIJEMKDM.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOEFFECTPLUGINFOLLOW_GET_FOLLOWATTACHTOBONE_OFFSET UNITYSDK_OFFSET(0x13EF0400)
#define MOLEMOLE_MONOEFFECTPLUGINFOLLOW_RUNTIMEBAKE_OFFSET UNITYSDK_OFFSET(0x13EF0420)
#define MOLEMOLE_MONOEFFECTPLUGINFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF0630)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginFollow_TypeDefinitionIndex = 50354;

	class MonoEffectPluginFollow : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::FGMMOKIFNDK Option; // 0x18
		::NMIOIJEMKDM posOffsetRelativeOption; // 0x1C
		::NMIOIJEMKDM angleOffsetRelativeOption; // 0x20
		::System::Boolean lockRotationX; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single fixedRotationX; // 0x28
		::System::Boolean FollowAttachPointScale; // 0x2C
		::System::Boolean ACBPBJJCOGL; // 0x2D
		::System::Boolean EPMCCJADNNP; // 0x2E
		::System::Boolean OnlyFirstFrame; // 0x2F
		::System::Boolean checkGround; // 0x30
		::System::Byte _padding1[0x7];
		::System::String* layerMask; // 0x38
		::System::Single originHeightOffset; // 0x40
		::System::Single rayDiatance; // 0x44
		::System::Single raySphereRadius; // 0x48
		::System::Boolean onlyAdjustGroundPos; // 0x4C
		::System::Boolean isActiveParticleFollow; // 0x4D
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector3 particleFollowOffset; // 0x50
		::System::Byte _padding3[0x4];
		::Il2CppArray<::UnityEngine::ParticleSystem*>* followParticleSystems; // 0x60
		::System::Single particleFollowSpeedFactor; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FollowAttachToBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINFOLLOW_GET_FOLLOWATTACHTOBONE_OFFSET))(this);
		}

		::System::Void RuntimeBake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINFOLLOW_RUNTIMEBAKE_OFFSET))(this);
		}
	};
}
