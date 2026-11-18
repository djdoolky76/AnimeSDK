#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

#define BFDLCHHIMLA_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x1424C270)
#define BFDLCHHIMLA_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x1424C2C0)
#define BFDLCHHIMLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1424C190)

inline static constexpr unsigned int BFDLCHHIMLA_TypeDefinitionIndex = 83184;

class BFDLCHHIMLA : public ::KGPHFADIIBM
{
public:
	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFDLCHHIMLA__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDLCHHIMLA_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDLCHHIMLA_OENOEFBECOA_OFFSET))(this);
	}
};
