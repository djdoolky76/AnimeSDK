#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMNLBKPDNB.h"
#include "unitysdk/NCCKMEOKAJK.h"

class AJDIJJMIALB;

#define BGOIMOHFBDL_GGCJAIJMMHJ_OFFSET UNITYSDK_OFFSET(0x128A7460)
#define BGOIMOHFBDL__CTOR_OFFSET UNITYSDK_OFFSET(0x128A7450)

inline static constexpr unsigned int BGOIMOHFBDL_TypeDefinitionIndex = 43512;

class BGOIMOHFBDL : public ::FGMNLBKPDNB
{
public:
	::AJDIJJMIALB* CBBEJBGIAKA; // 0x10

	::System::Void _ctor(::AJDIJJMIALB* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::AJDIJJMIALB*))((::PBYTE)hIl2Cpp + BGOIMOHFBDL__CTOR_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void GGCJAIJMMHJ(::NCCKMEOKAJK& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::NCCKMEOKAJK&))((::PBYTE)hIl2Cpp + BGOIMOHFBDL_GGCJAIJMMHJ_OFFSET))(this, HBMGHPEPBNC);
	}
};
