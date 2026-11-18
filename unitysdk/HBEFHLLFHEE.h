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

#define HBEFHLLFHEE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D7F200)
#define HBEFHLLFHEE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D7E860)
#define HBEFHLLFHEE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D7F900)
#define HBEFHLLFHEE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D7F260)

inline static constexpr unsigned int HBEFHLLFHEE_TypeDefinitionIndex = 91645;

class HBEFHLLFHEE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x28
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x50
	::CPABOPKIGAL* NANHAJLHEBH; // 0x58
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0x60
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x68
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x70
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x78
	::CPABOPKIGAL* HIEMBEABMPO; // 0x80
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x88
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x90
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x98
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0xA0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0xA8
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xB0
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0xB8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0xC0
	::CPABOPKIGAL* CAINIMPCMJE; // 0xC8
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0xD0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0xD8
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0xE0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEFHLLFHEE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEFHLLFHEE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HBEFHLLFHEE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEFHLLFHEE_GDEOPIBNOIN_OFFSET))(this);
	}
};
