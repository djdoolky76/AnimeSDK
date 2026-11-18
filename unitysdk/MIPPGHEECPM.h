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

#define MIPPGHEECPM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C8E980)
#define MIPPGHEECPM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C8E070)
#define MIPPGHEECPM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C8F0C0)
#define MIPPGHEECPM_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x16C8E930)
#define MIPPGHEECPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8E9E0)

inline static constexpr unsigned int MIPPGHEECPM_TypeDefinitionIndex = 70014;

class MIPPGHEECPM : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x18
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x28
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x40
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x48
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x58
	::CPABOPKIGAL* NANHAJLHEBH; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x68
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x70
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x80
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x88
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x98
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0xA0
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0xA8
	::CPABOPKIGAL* CAINIMPCMJE; // 0xB0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0xB8
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xC0
	::CPABOPKIGAL* HIEMBEABMPO; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPPGHEECPM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPPGHEECPM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MIPPGHEECPM_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + MIPPGHEECPM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPPGHEECPM_GDEOPIBNOIN_OFFSET))(this);
	}
};
