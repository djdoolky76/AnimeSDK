#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
class PFEOJDIJIBM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define JLBFDJAGHOD_AMMNBINFGDD_OFFSET UNITYSDK_OFFSET(0x157CF6F0)
#define JLBFDJAGHOD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x157CEF60)
#define JLBFDJAGHOD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x157CECA0)
#define JLBFDJAGHOD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x157CF660)
#define JLBFDJAGHOD_KLDPMPIADKO_OFFSET UNITYSDK_OFFSET(0x157CF5E0)
#define JLBFDJAGHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x157CF3A0)

inline static constexpr unsigned int JLBFDJAGHOD_TypeDefinitionIndex = 53864;

class JLBFDJAGHOD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PAMBCPNHEEC; // 0x18
	::KCMIFNGABDC_1<::System::Single>* JFCEGDMPAED; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JKAFMOMNFJC; // 0x30
	::MKBBPOFGLOF* ACGPEIEBDAJ; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBFDJAGHOD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBFDJAGHOD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JLBFDJAGHOD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void KLDPMPIADKO(::PFEOJDIJIBM* DACDAPIGBCB, ::System::Int32 BNLHPGHLKDK, ::AIJGGGANLLD HGIJHODLIBC)
	{
		return ((::System::Void(*)(::PFEOJDIJIBM*, ::System::Int32, ::AIJGGGANLLD))((::PBYTE)hIl2Cpp + JLBFDJAGHOD_KLDPMPIADKO_OFFSET))(DACDAPIGBCB, BNLHPGHLKDK, HGIJHODLIBC);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBFDJAGHOD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* AMMNBINFGDD(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + JLBFDJAGHOD_AMMNBINFGDD_OFFSET))(this, BKBGPKNGNMF);
	}
};
