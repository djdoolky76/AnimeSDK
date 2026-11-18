#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define KGAPIGPEKDD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1520B570)
#define KGAPIGPEKDD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1520B4E0)
#define KGAPIGPEKDD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1520B790)
#define KGAPIGPEKDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1520B6F0)

inline static constexpr unsigned int KGAPIGPEKDD_TypeDefinitionIndex = 54859;

class KGAPIGPEKDD : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPIGPEKDD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPIGPEKDD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KGAPIGPEKDD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPIGPEKDD_GDEOPIBNOIN_OFFSET))(this);
	}
};
