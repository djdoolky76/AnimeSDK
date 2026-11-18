#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"
#include "unitysdk/HJHKEDBIPPK.h"

class OAEFGCLEHHO;

#define KGFBPJKGACB_ABLEONCKIIP_OFFSET UNITYSDK_OFFSET(0x157EA320)
#define KGFBPJKGACB_AOIPLNHKOGD_OFFSET UNITYSDK_OFFSET(0x157EA500)
#define KGFBPJKGACB_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x157E9ED0)
#define KGFBPJKGACB_OCDOCMLCKEP_OFFSET UNITYSDK_OFFSET(0x157E9F10)
#define KGFBPJKGACB_ONSTART_OFFSET UNITYSDK_OFFSET(0x157E9E90)
#define KGFBPJKGACB__CTOR_OFFSET UNITYSDK_OFFSET(0x157E9E80)

inline static constexpr unsigned int KGFBPJKGACB_TypeDefinitionIndex = 41001;

class KGFBPJKGACB : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFBPJKGACB__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFBPJKGACB_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFBPJKGACB_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OCDOCMLCKEP(::HJHKEDBIPPK HJLNBEJMCJO)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + KGFBPJKGACB_OCDOCMLCKEP_OFFSET))(this, HJLNBEJMCJO);
	}

	::System::Void ABLEONCKIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFBPJKGACB_ABLEONCKIIP_OFFSET))(this);
	}

	::System::Void AOIPLNHKOGD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KGFBPJKGACB_AOIPLNHKOGD_OFFSET))(this, GLAOEHCGCFO);
	}
};
