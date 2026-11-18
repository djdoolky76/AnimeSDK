#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMILKOJNFFF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7A3D10)
#define NMILKOJNFFF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7A3C80)
#define NMILKOJNFFF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7A3D70)
#define NMILKOJNFFF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7A3D80)

inline static constexpr unsigned int NMILKOJNFFF_TypeDefinitionIndex = 64662;

struct alignas(8) NMILKOJNFFF
{
	::System::Int32 MGNMJMACKLO; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* FIJMGOEJKOC; // 0x18

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NMILKOJNFFF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMILKOJNFFF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NMILKOJNFFF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NMILKOJNFFF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
