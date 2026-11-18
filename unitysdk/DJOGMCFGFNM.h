#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DJOGMCFGFNM_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x149B1020)
#define DJOGMCFGFNM_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x149B0B00)
#define DJOGMCFGFNM__CTOR_OFFSET UNITYSDK_OFFSET(0x149B0AE0)

inline static constexpr unsigned int DJOGMCFGFNM_TypeDefinitionIndex = 41049;

class DJOGMCFGFNM : public ::JHCLHGCLLBF
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* NGAFFFKBOBN; // 0x18
	::CJIEIHEDMME* PJBDLMBIIBH; // 0x20

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + DJOGMCFGFNM__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOGMCFGFNM_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOGMCFGFNM_GKCLAFJFBNF_OFFSET))(this);
	}
};
