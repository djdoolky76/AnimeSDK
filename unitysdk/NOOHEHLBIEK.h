#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOJCGEBJFMB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define NOOHEHLBIEK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE1AF7D0)
#define NOOHEHLBIEK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE1AED80)
#define NOOHEHLBIEK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE1AF830)
#define NOOHEHLBIEK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE1AEE00)
#define NOOHEHLBIEK__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AFC00)

inline static constexpr unsigned int NOOHEHLBIEK_TypeDefinitionIndex = 79392;

class NOOHEHLBIEK : public ::System::Object
{
public:
	::System::String* AIPGKOJFIPE; // 0x10
	::System::Int32 CEAGIEKJFGA; // 0x18
	::UnityEngine::Vector3 CLMNLPKFBFA; // 0x1C
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x28
	::System::Single BGHNMCIMOAH; // 0x34
	::UnityEngine::Vector3 BFBELMDIAHI; // 0x38
	::AOJCGEBJFMB OBKKEJBEBAM; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHEHLBIEK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NOOHEHLBIEK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOOHEHLBIEK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOOHEHLBIEK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NOOHEHLBIEK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
