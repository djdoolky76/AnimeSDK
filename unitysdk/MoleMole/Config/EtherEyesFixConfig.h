#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x849E00)
#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x849D70)
#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x849E90)
#define MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x849E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesFixConfig_TypeDefinitionIndex = 61937;

	struct alignas(8) EtherEyesFixConfig
	{
		::System::String* clipNameForward; // 0x10
		::System::String* clipNameBackward; // 0x18
		::System::Boolean supportLoop; // 0x20
		::System::Boolean overrideInteractPoint; // 0x21
		::System::Byte _padding0[0x6];
		::System::String* soundEventForward; // 0x28
		::System::String* soundEventBackward; // 0x30

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESFIXCONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
