#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define PLDLMCGLOKE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14BAF8F0)
#define PLDLMCGLOKE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14BAFC50)
#define PLDLMCGLOKE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14BAF950)
#define PLDLMCGLOKE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14BAFCD0)
#define PLDLMCGLOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB02E0)

inline static constexpr unsigned int PLDLMCGLOKE_TypeDefinitionIndex = 62990;

class PLDLMCGLOKE : public ::System::Object
{
public:
	::System::String* OGCJGJFPBJG; // 0x10
	::System::String* DHNCBNALKCB; // 0x18
	::System::Boolean BJHJJDDIFMK; // 0x20
	::System::Byte _padding0[0x3];
	::BLPJECICNDE GLCFNGLDMGC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDLMCGLOKE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLDLMCGLOKE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLDLMCGLOKE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLDLMCGLOKE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PLDLMCGLOKE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
