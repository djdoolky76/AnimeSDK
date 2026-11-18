#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHNDOKNJAAM.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x785680)
#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7855F0)
#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x785710)
#define MOLEMOLE_CONFIG_STIMULUSEVENTITEM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7856E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StimulusEventItem_TypeDefinitionIndex = 93080;

	struct alignas(4) StimulusEventItem
	{
		::KHNDOKNJAAM Event; // 0x10
		::System::Int32 stimulusID; // 0x14

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEVENTITEM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
