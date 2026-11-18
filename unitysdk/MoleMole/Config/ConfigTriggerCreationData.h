#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class TriggerCreationData; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7FF400)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7FF370)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7FF460)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7FF470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerCreationData_TypeDefinitionIndex = 91265;

	struct alignas(8) ConfigTriggerCreationData
	{
		::System::String* ColliderName; // 0x10
		::MoleMole::Config::TriggerCreationData* ColliderData; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCREATIONDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
