#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define FFHKMDBBMKP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x655CB0)
#define FFHKMDBBMKP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x655C20)
#define FFHKMDBBMKP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x655D40)
#define FFHKMDBBMKP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x655D10)

inline static constexpr unsigned int FFHKMDBBMKP_TypeDefinitionIndex = 92673;

struct alignas(4) FFHKMDBBMKP
{
	::System::UInt32 NODBNPNDJFK; // 0x10

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFHKMDBBMKP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFHKMDBBMKP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FFHKMDBBMKP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFHKMDBBMKP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
