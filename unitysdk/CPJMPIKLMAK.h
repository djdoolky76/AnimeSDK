#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
class PFEOJDIJIBM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define CPJMPIKLMAK_AMMNBINFGDD_OFFSET UNITYSDK_OFFSET(0x19732AC0)
#define CPJMPIKLMAK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x197322D0)
#define CPJMPIKLMAK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19731FB0)
#define CPJMPIKLMAK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x197329B0)
#define CPJMPIKLMAK_KLDPMPIADKO_OFFSET UNITYSDK_OFFSET(0x19732A40)
#define CPJMPIKLMAK__CTOR_OFFSET UNITYSDK_OFFSET(0x19732730)

inline static constexpr unsigned int CPJMPIKLMAK_TypeDefinitionIndex = 88403;

class CPJMPIKLMAK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ELEGHNLJEFC; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Single>* JFCEGDMPAED; // 0x28
	::MKBBPOFGLOF* ACGPEIEBDAJ; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* PAMBCPNHEEC; // 0x38
	::KCMIFNGABDC_1<::System::String*>* JKAFMOMNFJC; // 0x40
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x48
	::KCMIFNGABDC_1<::System::String*>* HABANHOKING; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJMPIKLMAK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJMPIKLMAK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPJMPIKLMAK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJMPIKLMAK_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void KLDPMPIADKO(::PFEOJDIJIBM* DACDAPIGBCB, ::System::Int32 BNLHPGHLKDK, ::AIJGGGANLLD HGIJHODLIBC)
	{
		return ((::System::Void(*)(::PFEOJDIJIBM*, ::System::Int32, ::AIJGGGANLLD))((::PBYTE)hIl2Cpp + CPJMPIKLMAK_KLDPMPIADKO_OFFSET))(DACDAPIGBCB, BNLHPGHLKDK, HGIJHODLIBC);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* AMMNBINFGDD(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + CPJMPIKLMAK_AMMNBINFGDD_OFFSET))(this, BKBGPKNGNMF);
	}
};
