#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMNLBKPDNB.h"
#include "unitysdk/NCCKMEOKAJK.h"

class GAEIDHINJCL;

#define ENEJJKEJKPH_GGCJAIJMMHJ_OFFSET UNITYSDK_OFFSET(0x135520C0)
#define ENEJJKEJKPH__CTOR_OFFSET UNITYSDK_OFFSET(0x135520B0)

inline static constexpr unsigned int ENEJJKEJKPH_TypeDefinitionIndex = 57309;

class ENEJJKEJKPH : public ::FGMNLBKPDNB
{
public:
	::GAEIDHINJCL* CBBEJBGIAKA; // 0x10

	::System::Void _ctor(::GAEIDHINJCL* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::GAEIDHINJCL*))((::PBYTE)hIl2Cpp + ENEJJKEJKPH__CTOR_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void GGCJAIJMMHJ(::NCCKMEOKAJK& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::NCCKMEOKAJK&))((::PBYTE)hIl2Cpp + ENEJJKEJKPH_GGCJAIJMMHJ_OFFSET))(this, HBMGHPEPBNC);
	}
};
