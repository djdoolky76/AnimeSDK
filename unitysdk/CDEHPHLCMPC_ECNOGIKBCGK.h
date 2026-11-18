#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CDEHPHLCMPC_ECNOGIKBCGK_CGPLJFOGBCN_OFFSET UNITYSDK_OFFSET(0x7590B0)
#define CDEHPHLCMPC_ECNOGIKBCGK_NDIAFLOGIAA_OFFSET UNITYSDK_OFFSET(0x7590C0)
#define CDEHPHLCMPC_ECNOGIKBCGK__CTOR_OFFSET UNITYSDK_OFFSET(0x409320)

inline static constexpr unsigned int CDEHPHLCMPC_ECNOGIKBCGK_TypeDefinitionIndex = 68046;

struct alignas(4) CDEHPHLCMPC_ECNOGIKBCGK
{
	::System::Single ICCHIIPMFJI; // 0x10
	::System::Single CGEAHHBIJAL; // 0x14

	::System::Void _ctor(::System::Single JBCDCHGEGFA, ::System::Single IEBFOKNFECB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_ECNOGIKBCGK__CTOR_OFFSET))(this, JBCDCHGEGFA, IEBFOKNFECB);
	}

	::System::Single CGPLJFOGBCN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_ECNOGIKBCGK_CGPLJFOGBCN_OFFSET))(this);
	}

	/*
	::CDEHPHLCMPC_ECNOGIKBCGK NDIAFLOGIAA(::System::Single HBEKKMCBGBK)
	{
		return ((::CDEHPHLCMPC_ECNOGIKBCGK(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_ECNOGIKBCGK_NDIAFLOGIAA_OFFSET))(this, HBEKKMCBGBK);
	}
	*/
};
