#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x606E80)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x606DF0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x606F10)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x606EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectOverrideConfig_TypeDefinitionIndex = 90711;

	struct alignas(4) EtherEyesObjectOverrideConfig
	{
		::System::Boolean UseButtonHighlight; // 0x10
		::System::Boolean UseSpecialMaterial; // 0x11
		::System::Boolean UseHighLightEffect; // 0x12

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTOVERRIDECONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
