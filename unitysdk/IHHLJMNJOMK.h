#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define IHHLJMNJOMK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x101472C0)
#define IHHLJMNJOMK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x101468C0)
#define IHHLJMNJOMK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10147320)
#define IHHLJMNJOMK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10146940)
#define IHHLJMNJOMK__CTOR_OFFSET UNITYSDK_OFFSET(0x10147880)

inline static constexpr unsigned int IHHLJMNJOMK_TypeDefinitionIndex = 67474;

class IHHLJMNJOMK : public ::System::Object
{
public:
	::System::String* LLMDNLFJGAC; // 0x10
	::System::String* PIGMFODDCFL; // 0x18
	::System::String* JDFAPHKOCMC; // 0x20
	::System::Int32 OIMNIHGBGMJ; // 0x28
	::System::Int32 APKIKLPPHEA; // 0x2C
	::System::Int32 DKAFGCAPFFM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHLJMNJOMK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHHLJMNJOMK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHHLJMNJOMK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IHHLJMNJOMK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHHLJMNJOMK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
