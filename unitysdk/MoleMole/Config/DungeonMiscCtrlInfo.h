#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBIHODCHCPC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACD6A0)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFACD290)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFACD700)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFACD310)
#define MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xFACD930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonMiscCtrlInfo_TypeDefinitionIndex = 69281;

	class DungeonMiscCtrlInfo : public ::System::Object
	{
	public:
		::LBIHODCHCPC CtrlType; // 0x10
		::System::Boolean EnableCtrl; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONMISCCTRLINFO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
