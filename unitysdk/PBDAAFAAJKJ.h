#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/OHEONICOODD.h"

class HNPJNICKLOJ;

#define PBDAAFAAJKJ_BPOALFNPKKE_OFFSET UNITYSDK_OFFSET(0x13A82F50)
#define PBDAAFAAJKJ_KGMHFLECAIO_OFFSET UNITYSDK_OFFSET(0x13A830B0)
#define PBDAAFAAJKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13A830A0)

inline static constexpr unsigned int PBDAAFAAJKJ_TypeDefinitionIndex = 40478;

class PBDAAFAAJKJ : public ::OHEONICOODD
{
public:
	::MoleMole::DisplayCase::DisplayBaseTransformData BPFJMLIDGLN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDAAFAAJKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean BPOALFNPKKE(::HNPJNICKLOJ* OINBCLODGCM)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + PBDAAFAAJKJ_BPOALFNPKKE_OFFSET))(this, OINBCLODGCM);
	}

	::System::Boolean KGMHFLECAIO(::HNPJNICKLOJ* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + PBDAAFAAJKJ_KGMHFLECAIO_OFFSET))(this, MIALFKCCCPI);
	}
};
