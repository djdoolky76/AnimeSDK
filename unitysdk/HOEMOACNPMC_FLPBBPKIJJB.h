#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOEMOACNPMC.h"

namespace System { class Random; }

#define HOEMOACNPMC_FLPBBPKIJJB_OOLNEDHEHPF_OFFSET UNITYSDK_OFFSET(0x19E36F30)
#define HOEMOACNPMC_FLPBBPKIJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E36F20)

inline static constexpr unsigned int HOEMOACNPMC_FLPBBPKIJJB_TypeDefinitionIndex = 84204;

class HOEMOACNPMC_FLPBBPKIJJB : public ::HOEMOACNPMC
{
public:
	::System::Random* CJJGBOPNHBN; // 0x10

	::System::Void _ctor(::System::Random* MFEPCLGOHPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + HOEMOACNPMC_FLPBBPKIJJB__CTOR_OFFSET))(this, MFEPCLGOHPI);
	}

	::System::Int32 OOLNEDHEHPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMOACNPMC_FLPBBPKIJJB_OOLNEDHEHPF_OFFSET))(this);
	}
};
