#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
class MPJKPJAIOEM;
class NJDHJGDFLDI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FEIJCCFEFOL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E5AA30)
#define FEIJCCFEFOL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E5A090)
#define FEIJCCFEFOL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E5B120)
#define FEIJCCFEFOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5AA90)

inline static constexpr unsigned int FEIJCCFEFOL_TypeDefinitionIndex = 63527;

class FEIJCCFEFOL : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* HIEMBEABMPO; // 0x28
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x38
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x40
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0x48
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x50
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x58
	::CPABOPKIGAL* CAINIMPCMJE; // 0x60
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x68
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x70
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x80
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x88
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x98
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0xA0
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0xA8
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0xB0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0xB8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0xC0
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0xC8
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0xD0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0xD8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0xE0
	::CPABOPKIGAL* NANHAJLHEBH; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJCCFEFOL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJCCFEFOL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FEIJCCFEFOL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIJCCFEFOL_GDEOPIBNOIN_OFFSET))(this);
	}
};
