#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHIIMKCHHDI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define CGFLNMEGCGD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7D6790)
#define CGFLNMEGCGD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7D6700)
#define CGFLNMEGCGD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7D6820)
#define CGFLNMEGCGD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7D67F0)

inline static constexpr unsigned int CGFLNMEGCGD_TypeDefinitionIndex = 63103;

struct alignas(4) CGFLNMEGCGD
{
	::System::Int32 FDDEHEPIHBJ; // 0x10
	::System::Byte _padding0[0x4];
	::HHIIMKCHHDI AEAFLLDMMPH; // 0x18

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CGFLNMEGCGD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CGFLNMEGCGD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CGFLNMEGCGD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CGFLNMEGCGD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
