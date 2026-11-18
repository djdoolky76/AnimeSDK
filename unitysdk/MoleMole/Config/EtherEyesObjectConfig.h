#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7EBDD0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7EBD40)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7EBE30)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7EBE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectConfig_TypeDefinitionIndex = 58965;

	struct alignas(4) EtherEyesObjectConfig
	{
		::MoleMole::Config::EtherEyesObjectType EtherEyesObjectType; // 0x10
		::System::Boolean canInteract; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 ZoomLockOffset; // 0x18
		::System::Boolean UseSpecialHighLightEffect; // 0x24

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTCONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
