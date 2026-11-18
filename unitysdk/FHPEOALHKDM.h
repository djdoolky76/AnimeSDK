#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHPEOALHKDM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7A9610)
#define FHPEOALHKDM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7A9580)
#define FHPEOALHKDM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7A9670)
#define FHPEOALHKDM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7A9680)

inline static constexpr unsigned int FHPEOALHKDM_TypeDefinitionIndex = 93029;

struct alignas(8) FHPEOALHKDM
{
	::System::Int32 ICDNAALAKNA; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* BBMFNBBMKHN; // 0x18

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHPEOALHKDM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHPEOALHKDM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHPEOALHKDM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHPEOALHKDM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
