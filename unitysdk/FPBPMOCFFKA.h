#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCBBDGEGPM.h"

class EMAHFMMMPMG;
namespace System { class Exception; }
namespace System { class String; }

#define FPBPMOCFFKA_APFHIPHFAOG_OFFSET UNITYSDK_OFFSET(0xBB77AA0)
#define FPBPMOCFFKA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0xBB77A50)
#define FPBPMOCFFKA_EOJJAELMMIG_OFFSET UNITYSDK_OFFSET(0xBB77E60)
#define FPBPMOCFFKA_KBENFPKGDLL_OFFSET UNITYSDK_OFFSET(0xBB77FE0)
#define FPBPMOCFFKA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB779A0)

inline static constexpr unsigned int FPBPMOCFFKA_TypeDefinitionIndex = 65659;

class FPBPMOCFFKA : public ::NPCBBDGEGPM
{
public:
	::System::Int32 KMPHAKCBAPN; // 0x48

	::System::Void _ctor(::System::UInt32 BKJAIDHIMEO, ::System::String* DIAOEGCDIGP, ::System::String* OKGKPMGCDMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FPBPMOCFFKA__CTOR_OFFSET))(this, BKJAIDHIMEO, DIAOEGCDIGP, OKGKPMGCDMJ);
	}

	::System::Void EDEFLFIKNFK(::System::Boolean CFHNOIIHLIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPBPMOCFFKA_EDEFLFIKNFK_OFFSET))(this, CFHNOIIHLIM);
	}

	::System::Void EOJJAELMMIG(::EMAHFMMMPMG* LMHNJIBCLJF, ::System::Exception* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::EMAHFMMMPMG*, ::System::Exception*))((::PBYTE)hIl2Cpp + FPBPMOCFFKA_EOJJAELMMIG_OFFSET))(this, LMHNJIBCLJF, NFFNEFLKPDG);
	}

	::System::Void APFHIPHFAOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBPMOCFFKA_APFHIPHFAOG_OFFSET))(this);
	}

	::System::Void KBENFPKGDLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBPMOCFFKA_KBENFPKGDLL_OFFSET))(this);
	}
};
