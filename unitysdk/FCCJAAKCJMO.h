#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCCJAAKCJMO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x655B80)
#define FCCJAAKCJMO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x655AF0)
#define FCCJAAKCJMO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x655BE0)
#define FCCJAAKCJMO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x655BF0)

inline static constexpr unsigned int FCCJAAKCJMO_TypeDefinitionIndex = 88565;

struct alignas(8) FCCJAAKCJMO
{
	::System::Int32 AELLPLBJELA; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::String*>* MFPLNCDADHL; // 0x18
	::System::String* HAMIDAGPIFG; // 0x20
	::System::String* PEOGAMDKMNJ; // 0x28
	::System::Int32 BFEKNHCDDGK; // 0x30
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x34
	::UnityEngine::Vector3 KPLGFGLGLPD; // 0x40

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCCJAAKCJMO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCCJAAKCJMO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCCJAAKCJMO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FCCJAAKCJMO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
