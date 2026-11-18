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

#define NPKIHACKLAB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE0DC300)
#define NPKIHACKLAB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE0DB960)
#define NPKIHACKLAB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE0DC9F0)
#define NPKIHACKLAB__CTOR_OFFSET UNITYSDK_OFFSET(0xE0DC360)

inline static constexpr unsigned int NPKIHACKLAB_TypeDefinitionIndex = 69608;

class NPKIHACKLAB : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x38
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0x40
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0x48
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x50
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x58
	::CPABOPKIGAL* CAINIMPCMJE; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x68
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x70
	::CPABOPKIGAL* HIEMBEABMPO; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x80
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0x88
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x90
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x98
	::CPABOPKIGAL* NANHAJLHEBH; // 0xA0
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0xA8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0xB0
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0xB8
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xC0
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0xC8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0xD0
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0xD8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0xE0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKIHACKLAB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKIHACKLAB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NPKIHACKLAB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKIHACKLAB_GDEOPIBNOIN_OFFSET))(this);
	}
};
