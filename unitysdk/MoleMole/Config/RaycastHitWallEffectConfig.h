#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HitWallEffectNormalEnum.h"
#include "unitysdk/MoleMole/Config/RayByAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B9DF0)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190BA280)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B9E50)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190BA300)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190BB4D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RaycastHitWallEffectConfig_TypeDefinitionIndex = 38964;

	class RaycastHitWallEffectConfig : public ::System::Object
	{
	public:
		::System::String* HitWallEffect; // 0x10
		::System::String* EffRayPosAttachPoint; // 0x18
		::System::String* EffRayDirAttachPoint; // 0x20
		::System::String* OverrideCameraShakeKey; // 0x28
		::UnityEngine::Vector3 HitWallEffectScaleMax; // 0x30
		::System::Single EffRayDistance; // 0x3C
		::UnityEngine::Vector3 RandomEulerMax; // 0x40
		::MoleMole::Config::RayByAxis EffRayStartDirAxis; // 0x4C
		::UnityEngine::Vector3 RayEulerOffset; // 0x50
		::UnityEngine::Vector3 RandomEulerMin; // 0x5C
		::UnityEngine::Vector3 HitWallEffectScaleMin; // 0x68
		::MoleMole::Config::HitWallEffectNormalEnum HitWallNormalType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
