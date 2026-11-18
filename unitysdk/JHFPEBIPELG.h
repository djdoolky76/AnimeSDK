#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define JHFPEBIPELG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x71F810)
#define JHFPEBIPELG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x71F780)
#define JHFPEBIPELG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x71F870)
#define JHFPEBIPELG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x71F880)

inline static constexpr unsigned int JHFPEBIPELG_TypeDefinitionIndex = 53068;

struct alignas(4) JHFPEBIPELG
{
	::UnityEngine::Vector2 EDEFLFIKNFK; // 0x10
	::UnityEngine::Vector2 BPABEFPJLKO; // 0x18
	::System::Boolean MHHNIOFKJDL; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single CMAGKICODDF; // 0x24

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JHFPEBIPELG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHFPEBIPELG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHFPEBIPELG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JHFPEBIPELG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
