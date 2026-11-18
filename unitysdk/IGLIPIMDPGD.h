#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define IGLIPIMDPGD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xB92D2E0)
#define IGLIPIMDPGD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xB92D190)
#define IGLIPIMDPGD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xB92D6D0)
#define IGLIPIMDPGD__CTOR_OFFSET UNITYSDK_OFFSET(0xB92D540)

inline static constexpr unsigned int IGLIPIMDPGD_TypeDefinitionIndex = 59829;

class IGLIPIMDPGD : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* BOHNBOELHDG; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIPIMDPGD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIPIMDPGD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IGLIPIMDPGD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIPIMDPGD_GDEOPIBNOIN_OFFSET))(this);
	}
};
