#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPEOMEJBKHE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x71A330)
#define JPEOMEJBKHE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x71A2A0)
#define JPEOMEJBKHE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x71A390)
#define JPEOMEJBKHE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x71A3A0)

inline static constexpr unsigned int JPEOMEJBKHE_TypeDefinitionIndex = 49722;

struct alignas(8) JPEOMEJBKHE
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Vector3 IFEFGIHOKOC; // 0x1C
	::System::String* ELABHAFEEDI; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* OAFHDLOHFNG; // 0x30

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JPEOMEJBKHE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JPEOMEJBKHE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JPEOMEJBKHE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JPEOMEJBKHE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
