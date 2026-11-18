#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define BLDNHKFEDGB_AMMNBINFGDD_OFFSET UNITYSDK_OFFSET(0xF7A9E00)
#define BLDNHKFEDGB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF7A9A00)
#define BLDNHKFEDGB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF7A98B0)
#define BLDNHKFEDGB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF7A9DF0)
#define BLDNHKFEDGB__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A9C60)

inline static constexpr unsigned int BLDNHKFEDGB_TypeDefinitionIndex = 73185;

class BLDNHKFEDGB : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* GOMPIMBPOHE; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* JDBAFGLHNGN; // 0x30
	::MKBBPOFGLOF* MKFOJCOLJLC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDNHKFEDGB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDNHKFEDGB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BLDNHKFEDGB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDNHKFEDGB_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* AMMNBINFGDD(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + BLDNHKFEDGB_AMMNBINFGDD_OFFSET))(BKBGPKNGNMF);
	}
};
