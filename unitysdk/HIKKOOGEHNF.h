#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class CPABOPKIGAL;
class KCBEGMCCKCA;
class MKBBPOFGLOF;
class MPJKPJAIOEM;
class NJDHJGDFLDI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HIKKOOGEHNF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17B01F20)
#define HIKKOOGEHNF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B01610)
#define HIKKOOGEHNF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B02660)
#define HIKKOOGEHNF_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x17B01ED0)
#define HIKKOOGEHNF__CTOR_OFFSET UNITYSDK_OFFSET(0x17B01F80)

inline static constexpr unsigned int HIKKOOGEHNF_TypeDefinitionIndex = 81825;

class HIKKOOGEHNF : public ::BKCJAIFHNKF
{
public:
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x18
	::CPABOPKIGAL* CAINIMPCMJE; // 0x20
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x50
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x58
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x60
	::CPABOPKIGAL* HIEMBEABMPO; // 0x68
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x70
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x80
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x88
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x98
	::CPABOPKIGAL* NANHAJLHEBH; // 0xA0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0xA8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0xB0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0xB8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0xC0
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKKOOGEHNF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKKOOGEHNF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HIKKOOGEHNF_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + HIKKOOGEHNF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKKOOGEHNF_GDEOPIBNOIN_OFFSET))(this);
	}
};
