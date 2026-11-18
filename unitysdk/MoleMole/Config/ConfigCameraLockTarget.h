#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCPJJFEPDOE.h"
#include "unitysdk/MoleMole/Config/ConfigCameraLockTargetBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABAC20)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABA760)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFABAC80)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFABA7E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFABAE60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTarget_TypeDefinitionIndex = 42908;

	class ConfigCameraLockTarget : public ::MoleMole::Config::ConfigCameraLockTargetBase
	{
	public:
		::System::Single BackRotateAngle; // 0x18
		::System::Single ExternalFanAngle; // 0x1C
		::JCPJJFEPDOE LockTargetDirection; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGET_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
