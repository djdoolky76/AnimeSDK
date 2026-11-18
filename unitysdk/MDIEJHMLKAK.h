#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLBLMBONHMM.h"

#define MDIEJHMLKAK_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x14D661A0)
#define MDIEJHMLKAK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D66160)
#define MDIEJHMLKAK_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x14D660E0)
#define MDIEJHMLKAK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D66090)

inline static constexpr unsigned int MDIEJHMLKAK_TypeDefinitionIndex = 80482;

class MDIEJHMLKAK : public ::PLBLMBONHMM
{
public:
	::System::Void _ctor(::System::Double CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MDIEJHMLKAK__CTOR_OFFSET))(this, CIIPCCLOHLH);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIEJHMLKAK_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIEJHMLKAK_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIEJHMLKAK_CNIKAMOAANF_OFFSET))(this);
	}
};
