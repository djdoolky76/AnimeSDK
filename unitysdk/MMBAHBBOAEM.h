#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define MMBAHBBOAEM_AAMHIOOFJAJ_OFFSET UNITYSDK_OFFSET(0x14DF2BD0)
#define MMBAHBBOAEM_DCKCPHBCPLI_OFFSET UNITYSDK_OFFSET(0x14DF30B0)
#define MMBAHBBOAEM_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x14DF3140)
#define MMBAHBBOAEM_HLEOJPMKMNB_OFFSET UNITYSDK_OFFSET(0x14DF2E40)
#define MMBAHBBOAEM_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x14DF27C0)
#define MMBAHBBOAEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF2570)

inline static constexpr unsigned int MMBAHBBOAEM_TypeDefinitionIndex = 53848;

class MMBAHBBOAEM : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MMBAHBBOAEM__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAHBBOAEM_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void AAMHIOOFJAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAHBBOAEM_AAMHIOOFJAJ_OFFSET))(this);
	}

	::System::Void DCKCPHBCPLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAHBBOAEM_DCKCPHBCPLI_OFFSET))(this);
	}

	static ::System::Void HLEOJPMKMNB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBAHBBOAEM_HLEOJPMKMNB_OFFSET))();
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBAHBBOAEM_GKCLAFJFBNF_OFFSET))(this);
	}
};
