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

#define PPINOBPKOPE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x119AACE0)
#define PPINOBPKOPE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x119AA3D0)
#define PPINOBPKOPE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x119AB420)
#define PPINOBPKOPE_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x119AAC90)
#define PPINOBPKOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x119AAD40)

inline static constexpr unsigned int PPINOBPKOPE_TypeDefinitionIndex = 56706;

class PPINOBPKOPE : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x18
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x28
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x30
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x40
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x58
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x60
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x68
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x70
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x80
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x88
	::CPABOPKIGAL* NANHAJLHEBH; // 0x90
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x98
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0xA0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0xA8
	::CPABOPKIGAL* CAINIMPCMJE; // 0xB0
	::CPABOPKIGAL* HIEMBEABMPO; // 0xB8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0xC0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPINOBPKOPE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPINOBPKOPE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPINOBPKOPE_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + PPINOBPKOPE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPINOBPKOPE_GDEOPIBNOIN_OFFSET))(this);
	}
};
