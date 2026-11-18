#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define AHLHGPIKGKJ_AAMHIOOFJAJ_OFFSET UNITYSDK_OFFSET(0x16D7B870)
#define AHLHGPIKGKJ_DCKCPHBCPLI_OFFSET UNITYSDK_OFFSET(0x16D7BE00)
#define AHLHGPIKGKJ_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x16D7BD70)
#define AHLHGPIKGKJ_IBDEHOCLECG_OFFSET UNITYSDK_OFFSET(0x16D7BAE0)
#define AHLHGPIKGKJ_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x16D7B440)
#define AHLHGPIKGKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7B1F0)

inline static constexpr unsigned int AHLHGPIKGKJ_TypeDefinitionIndex = 84128;

class AHLHGPIKGKJ : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + AHLHGPIKGKJ__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLHGPIKGKJ_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void AAMHIOOFJAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLHGPIKGKJ_AAMHIOOFJAJ_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLHGPIKGKJ_GKCLAFJFBNF_OFFSET))(this);
	}

	::System::Void DCKCPHBCPLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLHGPIKGKJ_DCKCPHBCPLI_OFFSET))(this);
	}

	static ::System::Void IBDEHOCLECG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLHGPIKGKJ_IBDEHOCLECG_OFFSET))();
	}
};
