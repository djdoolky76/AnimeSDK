#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMNLBKPDNB.h"
#include "unitysdk/NCCKMEOKAJK.h"

class CPEIAEGMLHO;

#define JACOIBJEPEN_GGCJAIJMMHJ_OFFSET UNITYSDK_OFFSET(0x13CA4030)
#define JACOIBJEPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA4020)

inline static constexpr unsigned int JACOIBJEPEN_TypeDefinitionIndex = 70871;

class JACOIBJEPEN : public ::FGMNLBKPDNB
{
public:
	::CPEIAEGMLHO* CBBEJBGIAKA; // 0x10

	::System::Void _ctor(::CPEIAEGMLHO* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::CPEIAEGMLHO*))((::PBYTE)hIl2Cpp + JACOIBJEPEN__CTOR_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void GGCJAIJMMHJ(::NCCKMEOKAJK& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::NCCKMEOKAJK&))((::PBYTE)hIl2Cpp + JACOIBJEPEN_GGCJAIJMMHJ_OFFSET))(this, HBMGHPEPBNC);
	}
};
