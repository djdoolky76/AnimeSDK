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

#define MCNOLAGNIED_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C760C0)
#define MCNOLAGNIED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C75720)
#define MCNOLAGNIED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C76860)
#define MCNOLAGNIED__CTOR_OFFSET UNITYSDK_OFFSET(0x16C76120)

inline static constexpr unsigned int MCNOLAGNIED_TypeDefinitionIndex = 84343;

class MCNOLAGNIED : public ::MHMFINLCNFN
{
public:
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x38
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x40
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x48
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x58
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0x60
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x68
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0x70
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x78
	::CPABOPKIGAL* NANHAJLHEBH; // 0x80
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x88
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0x90
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x98
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0xA0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0xA8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0xB0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0xB8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0xC0
	::CPABOPKIGAL* HIEMBEABMPO; // 0xC8
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xD0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0xD8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0xE0
	::CPABOPKIGAL* CAINIMPCMJE; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNOLAGNIED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNOLAGNIED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCNOLAGNIED_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNOLAGNIED_GDEOPIBNOIN_OFFSET))(this);
	}
};
