#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABDCODBFDMB_EPGLJLDPCLK_OFFSET UNITYSDK_OFFSET(0x1E1B24C0)
#define ABDCODBFDMB_LIFFELFMLCG_OFFSET UNITYSDK_OFFSET(0x74C9D0)
#define ABDCODBFDMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B24A0)

inline static constexpr unsigned int ABDCODBFDMB_TypeDefinitionIndex = 93530;

struct alignas(4) ABDCODBFDMB
{
	static ::ABDCODBFDMB* StaticGet_DDGNFJDLOKA()
	{
		return (::ABDCODBFDMB*)Il2CppClass::FromTypeDefinitionIndex(ABDCODBFDMB_TypeDefinitionIndex)->GetStaticField(0x144D0);
	}
	::System::Single POFJOIMEINJ; // 0x10
	::System::Boolean KEMFGKHNIDD; // 0x14
	::System::Byte _padding0[0x3];
	::System::Single FINFGEKCKMK; // 0x18
	::System::Single JKIIJBKEECF; // 0x1C
	::System::Single ODGLGLNFOML; // 0x20
	::System::Boolean JLDOFGMMGMA; // 0x24
	::System::Byte _padding1[0x3];
	::System::Single FNPMFGPKACB; // 0x28
	::System::Boolean ICEKKNKACFK; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABDCODBFDMB__CCTOR_OFFSET))();
	}

	::System::Boolean LIFFELFMLCG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDCODBFDMB_LIFFELFMLCG_OFFSET))(this);
	}

	/*
	static ::ABDCODBFDMB EPGLJLDPCLK(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::ABDCODBFDMB(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABDCODBFDMB_EPGLJLDPCLK_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}
	*/
};
