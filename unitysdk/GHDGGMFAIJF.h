#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKGLILBPOFO.h"

class HIDPAPFBACC;

#define GHDGGMFAIJF_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x18141B00)
#define GHDGGMFAIJF_MCHBEDLEAFJ_OFFSET UNITYSDK_OFFSET(0x18141B40)
#define GHDGGMFAIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18141AF0)

inline static constexpr unsigned int GHDGGMFAIJF_TypeDefinitionIndex = 91914;

class GHDGGMFAIJF : public ::OKGLILBPOFO
{
public:
	::System::Void _ctor(::HIDPAPFBACC* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::HIDPAPFBACC*))((::PBYTE)hIl2Cpp + GHDGGMFAIJF__CTOR_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void GLEJMKLOMBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDGGMFAIJF_GLEJMKLOMBP_OFFSET))(this);
	}

	::System::Void MCHBEDLEAFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDGGMFAIJF_MCHBEDLEAFJ_OFFSET))(this);
	}
};
