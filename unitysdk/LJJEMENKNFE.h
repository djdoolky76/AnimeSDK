#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define LJJEMENKNFE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E01B60)
#define LJJEMENKNFE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E01A10)
#define LJJEMENKNFE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E01F50)
#define LJJEMENKNFE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E01DC0)

inline static constexpr unsigned int LJJEMENKNFE_TypeDefinitionIndex = 48786;

class LJJEMENKNFE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* DBDIFFCJLFC; // 0x28
	::MKBBPOFGLOF* BOHNBOELHDG; // 0x30
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJEMENKNFE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJEMENKNFE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LJJEMENKNFE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJEMENKNFE_GDEOPIBNOIN_OFFSET))(this);
	}
};
