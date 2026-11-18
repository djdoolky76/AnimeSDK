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

#define ODDKMIEOCNL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16BFC3C0)
#define ODDKMIEOCNL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16BFBAB0)
#define ODDKMIEOCNL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16BFCB00)
#define ODDKMIEOCNL_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x16BFC370)
#define ODDKMIEOCNL__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFC420)

inline static constexpr unsigned int ODDKMIEOCNL_TypeDefinitionIndex = 72348;

class ODDKMIEOCNL : public ::BKCJAIFHNKF
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x20
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x28
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x38
	::CPABOPKIGAL* CAINIMPCMJE; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x48
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x50
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x58
	::CPABOPKIGAL* NANHAJLHEBH; // 0x60
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x68
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x70
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x78
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x80
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x88
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x90
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x98
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0xA0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0xA8
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0xB0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0xB8
	::CPABOPKIGAL* HIEMBEABMPO; // 0xC0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDKMIEOCNL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDKMIEOCNL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ODDKMIEOCNL_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + ODDKMIEOCNL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDKMIEOCNL_GDEOPIBNOIN_OFFSET))(this);
	}
};
