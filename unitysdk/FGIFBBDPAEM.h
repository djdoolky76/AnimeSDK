#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define FGIFBBDPAEM_FBFOGKBOKMC_OFFSET UNITYSDK_OFFSET(0xBB41DE0)
#define FGIFBBDPAEM_FDOIAKIODOD_OFFSET UNITYSDK_OFFSET(0xBB42070)
#define FGIFBBDPAEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBB42060)

inline static constexpr unsigned int FGIFBBDPAEM_TypeDefinitionIndex = 84426;

class FGIFBBDPAEM : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIFBBDPAEM__CTOR_OFFSET))(this);
	}

	::System::Void FBFOGKBOKMC(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FGIFBBDPAEM_FBFOGKBOKMC_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void FDOIAKIODOD(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FGIFBBDPAEM_FDOIAKIODOD_OFFSET))(this, MIALFKCCCPI);
	}
};
