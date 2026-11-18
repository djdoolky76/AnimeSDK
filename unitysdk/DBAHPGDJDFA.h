#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBAHPGDJDFA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7E79E0)
#define DBAHPGDJDFA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7E7950)
#define DBAHPGDJDFA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7E7A40)
#define DBAHPGDJDFA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7E7A50)

inline static constexpr unsigned int DBAHPGDJDFA_TypeDefinitionIndex = 63629;

struct alignas(8) DBAHPGDJDFA
{
	::System::Int32 BGMOLEPOCBC; // 0x10
	::System::Int32 PBFDPIDHCHG; // 0x14
	::System::Collections::Generic::List_1<::System::Int32>* MCKLFABIOJI; // 0x18

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBAHPGDJDFA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBAHPGDJDFA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBAHPGDJDFA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DBAHPGDJDFA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
