#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFHKMDBBMKP.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHIIMKCHHDI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6604F0)
#define HHIIMKCHHDI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x660460)
#define HHIIMKCHHDI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x660580)
#define HHIIMKCHHDI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x660550)

inline static constexpr unsigned int HHIIMKCHHDI_TypeDefinitionIndex = 72178;

struct alignas(8) HHIIMKCHHDI
{
	::System::Int32 LNACFDNJFOG; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::FFHKMDBBMKP>* EPCNEBHOFDO; // 0x18

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HHIIMKCHHDI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HHIIMKCHHDI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HHIIMKCHHDI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HHIIMKCHHDI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
