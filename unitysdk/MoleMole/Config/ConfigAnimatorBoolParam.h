#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7DC6A0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7DC610)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7DC730)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7DC700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorBoolParam_TypeDefinitionIndex = 51480;

	struct alignas(8) ConfigAnimatorBoolParam
	{
		::System::String* Key; // 0x10
		::System::Boolean Value; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBOOLPARAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
