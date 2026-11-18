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

#define GPDBEGGGAFB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D74B50)
#define GPDBEGGGAFB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D741B0)
#define GPDBEGGGAFB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D75250)
#define GPDBEGGGAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D74BB0)

inline static constexpr unsigned int GPDBEGGGAFB_TypeDefinitionIndex = 42488;

class GPDBEGGGAFB : public ::MHMFINLCNFN
{
public:
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x30
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x48
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x50
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x58
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0x60
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x68
	::CPABOPKIGAL* NANHAJLHEBH; // 0x70
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x78
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x80
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x88
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x98
	::CPABOPKIGAL* CAINIMPCMJE; // 0xA0
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0xA8
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0xB0
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0xB8
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0xC0
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xC8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0xD0
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0xD8
	::CPABOPKIGAL* HIEMBEABMPO; // 0xE0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDBEGGGAFB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDBEGGGAFB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GPDBEGGGAFB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDBEGGGAFB_GDEOPIBNOIN_OFFSET))(this);
	}
};
