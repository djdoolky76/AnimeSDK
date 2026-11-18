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

#define MHJDNJFFFBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E2F340)
#define MHJDNJFFFBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E2E9A0)
#define MHJDNJFFFBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E2FA30)
#define MHJDNJFFFBC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2F3A0)

inline static constexpr unsigned int MHJDNJFFFBC_TypeDefinitionIndex = 73765;

class MHJDNJFFFBC : public ::MHMFINLCNFN
{
public:
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x30
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x40
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x48
	::CPABOPKIGAL* HIEMBEABMPO; // 0x50
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x58
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x60
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x68
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x70
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x78
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0x80
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x88
	::CPABOPKIGAL* CAINIMPCMJE; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x98
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0xA0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0xA8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0xB0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0xB8
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xC0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0xC8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0xD0
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0xD8
	::CPABOPKIGAL* NANHAJLHEBH; // 0xE0
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJDNJFFFBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJDNJFFFBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MHJDNJFFFBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJDNJFFFBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
