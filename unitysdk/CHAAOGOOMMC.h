#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CHAAOGOOMMC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1694F9D0)
#define CHAAOGOOMMC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1694F760)
#define CHAAOGOOMMC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1694FC70)
#define CHAAOGOOMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1694FA20)

inline static constexpr unsigned int CHAAOGOOMMC_TypeDefinitionIndex = 83121;

class CHAAOGOOMMC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ELAADEDGEIL; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* OLMEJLNJIDB; // 0x40
	::CPABOPKIGAL* MMFNFINOFPN; // 0x48
	::MKBBPOFGLOF* DGLPCINAMAC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAAOGOOMMC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAAOGOOMMC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHAAOGOOMMC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAAOGOOMMC_GDEOPIBNOIN_OFFSET))(this);
	}
};
