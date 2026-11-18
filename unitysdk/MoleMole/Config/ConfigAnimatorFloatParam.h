#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6E9230)
#define MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6E91A0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6E92C0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6E9290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorFloatParam_TypeDefinitionIndex = 60609;

	struct alignas(8) ConfigAnimatorFloatParam
	{
		::System::String* Key; // 0x10
		::System::Single Value; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORFLOATPARAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
