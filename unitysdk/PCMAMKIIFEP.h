#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMJMHMDFLK.h"
#include "unitysdk/DEGIECFEDMB.h"

class EFGEKMKMFJO;

#define PCMAMKIIFEP_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x1D9CB490)
#define PCMAMKIIFEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D9CB600)
#define PCMAMKIIFEP_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1D9CB690)
#define PCMAMKIIFEP_IAOJANNAPFD_OFFSET UNITYSDK_OFFSET(0x1D9C86D0)
#define PCMAMKIIFEP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1D9CB570)
#define PCMAMKIIFEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D9CB410)
#define PCMAMKIIFEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CB5F0)

inline static constexpr unsigned int PCMAMKIIFEP_TypeDefinitionIndex = 93542;

class PCMAMKIIFEP : public ::DEGIECFEDMB
{
public:
	::System::Int32 PDCIIGLLIPO; // 0x28
	::BIMJMHMDFLK EECEKEPKHCC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMAMKIIFEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMAMKIIFEP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ(::EFGEKMKMFJO* LGPOPAFNIIA)
	{
		return ((::System::Boolean(*)(::PVOID, ::EFGEKMKMFJO*))((::PBYTE)hIl2Cpp + PCMAMKIIFEP_BGJPLEHEDKJ_OFFSET))(this, LGPOPAFNIIA);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMAMKIIFEP_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMAMKIIFEP_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMAMKIIFEP_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Boolean IAOJANNAPFD(::EFGEKMKMFJO* LGPOPAFNIIA)
	{
		return ((::System::Boolean(*)(::PVOID, ::EFGEKMKMFJO*))((::PBYTE)hIl2Cpp + PCMAMKIIFEP_IAOJANNAPFD_OFFSET))(this, LGPOPAFNIIA);
	}
};
