#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCBAOKKFBNM.h"

class BKHMKNIJCGC;

#define NNEEKIPOJLA_JFBMCIKPHIB_OFFSET UNITYSDK_OFFSET(0x1FF6A6E0)
#define NNEEKIPOJLA_KHIFBNCCDMC_OFFSET UNITYSDK_OFFSET(0x1FF6A740)
#define NNEEKIPOJLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6A730)

inline static constexpr unsigned int NNEEKIPOJLA_TypeDefinitionIndex = 95384;

class NNEEKIPOJLA : public ::MCBAOKKFBNM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEEKIPOJLA__CTOR_OFFSET))(this);
	}

	::System::Int32 JFBMCIKPHIB(::BKHMKNIJCGC* IPMMOBCLLNH)
	{
		return ((::System::Int32(*)(::PVOID, ::BKHMKNIJCGC*))((::PBYTE)hIl2Cpp + NNEEKIPOJLA_JFBMCIKPHIB_OFFSET))(this, IPMMOBCLLNH);
	}

	::System::Int32 KHIFBNCCDMC(::BKHMKNIJCGC* MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::BKHMKNIJCGC*))((::PBYTE)hIl2Cpp + NNEEKIPOJLA_KHIFBNCCDMC_OFFSET))(this, MIALFKCCCPI);
	}
};
