#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DD550)
#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7DD4C0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7DD5B0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7DD5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorTriggerParam_TypeDefinitionIndex = 85613;

	struct alignas(8) ConfigAnimatorTriggerParam
	{
		::System::String* Key; // 0x10

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORTRIGGERPARAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
