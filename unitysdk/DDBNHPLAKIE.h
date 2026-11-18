#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define DDBNHPLAKIE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F9440)
#define DDBNHPLAKIE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x193F9710)
#define DDBNHPLAKIE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x193F94A0)
#define DDBNHPLAKIE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x193F9790)
#define DDBNHPLAKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x193F9DE0)

inline static constexpr unsigned int DDBNHPLAKIE_TypeDefinitionIndex = 65054;

class DDBNHPLAKIE : public ::System::Object
{
public:
	::System::String* DDFOJAPOALA; // 0x10
	::System::String* IFDLMNJCFDL; // 0x18
	::System::Single IIJBHMMACCD; // 0x20
	::System::Single BCFABFMFPHP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBNHPLAKIE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDBNHPLAKIE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDBNHPLAKIE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDBNHPLAKIE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDBNHPLAKIE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
