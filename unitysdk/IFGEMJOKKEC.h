#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define IFGEMJOKKEC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A97700)
#define IFGEMJOKKEC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A97620)
#define IFGEMJOKKEC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A97870)
#define IFGEMJOKKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A97760)

inline static constexpr unsigned int IFGEMJOKKEC_TypeDefinitionIndex = 51560;

class IFGEMJOKKEC : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* CCDJHMHENNH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OOBDEGLEJDG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEMJOKKEC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEMJOKKEC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IFGEMJOKKEC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGEMJOKKEC_GDEOPIBNOIN_OFFSET))(this);
	}
};
