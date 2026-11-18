#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCameraLockTargetBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131DCDA0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131DBF20)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x131DCE00)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x131DBFA0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x131DD270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetWithOffsetLook_TypeDefinitionIndex = 64916;

	class ConfigCameraLockTargetWithOffsetLook : public ::MoleMole::Config::ConfigCameraLockTargetBase
	{
	public:
		::System::Single LockLastTime; // 0x18
		::System::Single EnterLerpTime; // 0x1C
		::System::Single ExitLerpTime; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* StartCurveKey; // 0x28
		::System::String* EndCurveKey; // 0x30
		::System::Boolean IngoreTimeScale; // 0x38
		::System::Boolean IsDragCancel; // 0x39
		::System::Byte _padding1[0x2];
		::System::Single OffsetLookRatio; // 0x3C
		::System::String* OverrideSpineLockName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
