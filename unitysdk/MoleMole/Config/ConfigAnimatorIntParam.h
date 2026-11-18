#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6AD7B0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6AD720)
#define MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6AD840)
#define MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6AD810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorIntParam_TypeDefinitionIndex = 77510;

	struct alignas(8) ConfigAnimatorIntParam
	{
		::System::String* Key; // 0x10
		::System::Int32 Value; // 0x18

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORINTPARAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
