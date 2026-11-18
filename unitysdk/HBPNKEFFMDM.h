#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/ELDDLDNMFHN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FGECBJCAGBC;
class LGAFMFNMCOG;
class MGEHIAFOLIE;
class MKBBPOFGLOF;
class OPCAMPLOOAO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HBPNKEFFMDM_AKEGGFEPJHI_OFFSET UNITYSDK_OFFSET(0x19DEF720)
#define HBPNKEFFMDM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19DEE7C0)
#define HBPNKEFFMDM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19DEE3E0)
#define HBPNKEFFMDM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19DEF9B0)
#define HBPNKEFFMDM_JCBKJIOIGPN_OFFSET UNITYSDK_OFFSET(0x19DEECA0)
#define HBPNKEFFMDM_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x19DEF9D0)
#define HBPNKEFFMDM_LBNCGCEBMBF_OFFSET UNITYSDK_OFFSET(0x19DEE830)
#define HBPNKEFFMDM_LDFLIFOLCBH_OFFSET UNITYSDK_OFFSET(0x19DEF510)
#define HBPNKEFFMDM_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x19DEE2F0)
#define HBPNKEFFMDM_PANNGJNMODL_OFFSET UNITYSDK_OFFSET(0x19DEEFF0)
#define HBPNKEFFMDM__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEE930)

inline static constexpr unsigned int HBPNKEFFMDM_TypeDefinitionIndex = 92717;

class HBPNKEFFMDM : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* EMKGIPKJBJG; // 0x0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* BNDFLHLBIHC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* NAIDADGNEDI; // 0x30
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* CJLOCBJHFCG; // 0x40
	::MKBBPOFGLOF* PKCEMNJECEP; // 0x48
	::AAMKEDEDHPD_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* BGPPDMJEOIC; // 0x50
	::KCMIFNGABDC_1<::System::String*>* JFHLOIOCKFG; // 0x58
	::MKBBPOFGLOF* DODOFIKEAFL; // 0x60
	::KCMIFNGABDC_1<::System::Int32>* LIMFEHCIAFE; // 0x68
	::KCMIFNGABDC_1<::OPCAMPLOOAO*>* LIEIAIMGIOD; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNKEFFMDM__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void LBNCGCEBMBF(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_LBNCGCEBMBF_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Boolean LDFLIFOLCBH(::System::Int32 FKAOLLMPLKI, ::ELDDLDNMFHN& GLPALMOOLLE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::ELDDLDNMFHN&))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_LDFLIFOLCBH_OFFSET))(FKAOLLMPLKI, GLPALMOOLLE);
	}

	static ::FGECBJCAGBC* AKEGGFEPJHI(::ELDDLDNMFHN GLPALMOOLLE, ::System::Boolean KJKNEGLIPNO)
	{
		return ((::FGECBJCAGBC*(*)(::ELDDLDNMFHN, ::System::Boolean))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_AKEGGFEPJHI_OFFSET))(GLPALMOOLLE, KJKNEGLIPNO);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void PANNGJNMODL(::MGEHIAFOLIE* HLDNHHCPEJD, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::MGEHIAFOLIE*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_PANNGJNMODL_OFFSET))(this, HLDNHHCPEJD, BKBGPKNGNMF);
	}

	::MGEHIAFOLIE* JCBKJIOIGPN(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::MGEHIAFOLIE*(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_JCBKJIOIGPN_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HBPNKEFFMDM_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
