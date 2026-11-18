#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MJBABCIIKHB.h"

#define DEPLIKMFKBN_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x1DE48C20)
#define DEPLIKMFKBN_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x1DE48FC0)
#define DEPLIKMFKBN_JPCMKGOFFCJ_OFFSET UNITYSDK_OFFSET(0x1DE49250)
#define DEPLIKMFKBN_LNHPIHCBGAD_OFFSET UNITYSDK_OFFSET(0x1DE49200)
#define DEPLIKMFKBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE48FA0)

inline static constexpr unsigned int DEPLIKMFKBN_TypeDefinitionIndex = 93907;

class DEPLIKMFKBN : public ::MJBABCIIKHB
{
public:
	::JGLIFHIAIEH FPOFECBCDDH; // 0x40
	::System::Boolean MCJCCJOEKGN; // 0x48
	::System::Byte _padding0[0x3];
	::System::Single GKPNFLAIAGD; // 0x4C
	::JGLIFHIAIEH MIALFKCCCPI; // 0x50
	::JGLIFHIAIEH KMGKAIDEIBA; // 0x58
	::System::Single ICHFALOCCPA; // 0x60
	::System::Single CJLKFOGFONE; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPLIKMFKBN__CTOR_OFFSET))(this);
	}

	::System::Void DDPPCLDJMHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPLIKMFKBN_DDPPCLDJMHF_OFFSET))(this);
	}

	::System::Void DFGOJHPONDC(::JGLIFHIAIEH AKAGDEFAGJA, ::JGLIFHIAIEH IACKHFCLPJI, ::System::Single ICHFALOCCPA, ::System::Single MDPPNMIPDMP, ::System::Single OBLBAFEMEJE)
	{
		return ((::System::Void(*)(::PVOID, ::JGLIFHIAIEH, ::JGLIFHIAIEH, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEPLIKMFKBN_DFGOJHPONDC_OFFSET))(this, AKAGDEFAGJA, IACKHFCLPJI, ICHFALOCCPA, MDPPNMIPDMP, OBLBAFEMEJE);
	}

	::System::Void LNHPIHCBGAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPLIKMFKBN_LNHPIHCBGAD_OFFSET))(this);
	}

	::System::Boolean JPCMKGOFFCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPLIKMFKBN_JPCMKGOFFCJ_OFFSET))(this);
	}
};
