#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E76F0)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E7200)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C6E7750)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C6E7280)
#define MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E7B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NumIntervalByDifficulty_TypeDefinitionIndex = 58658;

	class NumIntervalByDifficulty : public ::System::Object
	{
	public:
		::System::Int32 DifficultyType; // 0x10
		::System::Int32 IntervalMin; // 0x14
		::System::Int32 IntervalMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NUMINTERVALBYDIFFICULTY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
