#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/RetreatDecayDistanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigMovementStateControl; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A02DA60)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A02C730)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A02DAC0)
#define MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A02C7B0)
#define MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02DF10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitData_TypeDefinitionIndex = 88993;

	class ConfigHitData : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigMovementStateControl* MovementControl; // 0x10
		::System::String* AttackeeCenterAttachPoint; // 0x18
		::UnityEngine::AnimationCurve* CurveZ; // 0x20
		::System::String* AttackerCenterAttachPoint; // 0x28
		::System::String* CustomCurveKey; // 0x30
		::UnityEngine::AnimationCurve* CurveX; // 0x38
		::UnityEngine::AnimationCurve* CurveY; // 0x40
		::System::Single ImpactRadius; // 0x48
		::MoleMole::Config::DissipationMode DissipationMode; // 0x4C
		::MoleMole::Config::RetreatDecayDistanceType DistanceType; // 0x50
		::System::Single DissipationDistance; // 0x54
		::System::Single Duration; // 0x58
		::UnityEngine::Vector3 Velocity; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITDATA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
