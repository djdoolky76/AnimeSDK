#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define NEAPGKAPCJF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727EEA0)
#define NEAPGKAPCJF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1727F0F0)
#define NEAPGKAPCJF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1727EF00)
#define NEAPGKAPCJF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1727F170)
#define NEAPGKAPCJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1727F4D0)

inline static constexpr unsigned int NEAPGKAPCJF_TypeDefinitionIndex = 77977;

class NEAPGKAPCJF : public ::System::Object
{
public:
	::System::String* EFAIHJCEDKI; // 0x10
	::System::String* ANNGODDFBBK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAPGKAPCJF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEAPGKAPCJF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NEAPGKAPCJF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NEAPGKAPCJF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEAPGKAPCJF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
