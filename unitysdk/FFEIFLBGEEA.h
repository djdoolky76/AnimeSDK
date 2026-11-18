#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCBBDGEGPM.h"

class EMAHFMMMPMG;
namespace System { class Exception; }
namespace System { class String; }

#define FFEIFLBGEEA_APFHIPHFAOG_OFFSET UNITYSDK_OFFSET(0x141A0510)
#define FFEIFLBGEEA_BAJCFILMCJI_OFFSET UNITYSDK_OFFSET(0x141A08E0)
#define FFEIFLBGEEA_BEBLAACDIEB_OFFSET UNITYSDK_OFFSET(0x141A05A0)
#define FFEIFLBGEEA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x141A0450)
#define FFEIFLBGEEA_EOJJAELMMIG_OFFSET UNITYSDK_OFFSET(0x141A0930)
#define FFEIFLBGEEA__CTOR_OFFSET UNITYSDK_OFFSET(0x141A03A0)

inline static constexpr unsigned int FFEIFLBGEEA_TypeDefinitionIndex = 87186;

class FFEIFLBGEEA : public ::NPCBBDGEGPM
{
public:
	::System::Int32 FFGDHCMPPCJ; // 0x48

	::System::Void _ctor(::System::UInt32 BKJAIDHIMEO, ::System::String* DIAOEGCDIGP, ::System::String* OKGKPMGCDMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FFEIFLBGEEA__CTOR_OFFSET))(this, BKJAIDHIMEO, DIAOEGCDIGP, OKGKPMGCDMJ);
	}

	::System::Void EDEFLFIKNFK(::System::Boolean CFHNOIIHLIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFEIFLBGEEA_EDEFLFIKNFK_OFFSET))(this, CFHNOIIHLIM);
	}

	::System::Void APFHIPHFAOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIFLBGEEA_APFHIPHFAOG_OFFSET))(this);
	}

	::System::Void BAJCFILMCJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIFLBGEEA_BAJCFILMCJI_OFFSET))(this);
	}

	::System::Void BEBLAACDIEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIFLBGEEA_BEBLAACDIEB_OFFSET))(this);
	}

	::System::Void EOJJAELMMIG(::EMAHFMMMPMG* LMHNJIBCLJF, ::System::Exception* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::EMAHFMMMPMG*, ::System::Exception*))((::PBYTE)hIl2Cpp + FFEIFLBGEEA_EOJJAELMMIG_OFFSET))(this, LMHNJIBCLJF, NFFNEFLKPDG);
	}
};
