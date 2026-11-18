#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define GOFKALOKHPJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17ADBA00)
#define GOFKALOKHPJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17ADB920)
#define GOFKALOKHPJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17ADBC40)
#define GOFKALOKHPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADBB30)

inline static constexpr unsigned int GOFKALOKHPJ_TypeDefinitionIndex = 84093;

class GOFKALOKHPJ : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* ODACADBAILG; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BOKLBFFMHNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFKALOKHPJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFKALOKHPJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOFKALOKHPJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFKALOKHPJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
