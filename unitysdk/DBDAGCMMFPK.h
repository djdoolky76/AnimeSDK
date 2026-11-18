#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define DBDAGCMMFPK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7E9590)
#define DBDAGCMMFPK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7E9500)
#define DBDAGCMMFPK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7E95F0)
#define DBDAGCMMFPK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7E9600)

inline static constexpr unsigned int DBDAGCMMFPK_TypeDefinitionIndex = 63947;

struct alignas(8) DBDAGCMMFPK
{
	::System::String* PJKPKAFIOHO; // 0x10
	::System::String* AJOFFLOEALF; // 0x18
	::System::String* JEEMFOOEPIJ; // 0x20
	::System::Boolean PPCDEGDBBNN; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 BFEKNHCDDGK; // 0x2C
	::System::Int32 HLBKHEFJAPH; // 0x30

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBDAGCMMFPK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBDAGCMMFPK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBDAGCMMFPK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DBDAGCMMFPK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
