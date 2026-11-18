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

#define GMCKKEOPHLM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17AD2580)
#define GMCKKEOPHLM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17AD1C70)
#define GMCKKEOPHLM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17AD2CC0)
#define GMCKKEOPHLM_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x17AD2530)
#define GMCKKEOPHLM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD25E0)

inline static constexpr unsigned int GMCKKEOPHLM_TypeDefinitionIndex = 78506;

class GMCKKEOPHLM : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x18
	::CPABOPKIGAL* NANHAJLHEBH; // 0x20
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x30
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x48
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x58
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x68
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x70
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x80
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x88
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x90
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x98
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0xA0
	::CPABOPKIGAL* CAINIMPCMJE; // 0xA8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0xB0
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0xB8
	::CPABOPKIGAL* HIEMBEABMPO; // 0xC0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCKKEOPHLM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCKKEOPHLM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GMCKKEOPHLM_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + GMCKKEOPHLM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCKKEOPHLM_GDEOPIBNOIN_OFFSET))(this);
	}
};
