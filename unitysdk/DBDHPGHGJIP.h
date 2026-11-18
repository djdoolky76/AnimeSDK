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

#define DBDHPGHGJIP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12B9C6B0)
#define DBDHPGHGJIP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12B9BD10)
#define DBDHPGHGJIP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12B9CDA0)
#define DBDHPGHGJIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9C710)

inline static constexpr unsigned int DBDHPGHGJIP_TypeDefinitionIndex = 55402;

class DBDHPGHGJIP : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x28
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x30
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x40
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x48
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x50
	::CPABOPKIGAL* NANHAJLHEBH; // 0x58
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x60
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x68
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x70
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x78
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x80
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x88
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x98
	::CPABOPKIGAL* CAINIMPCMJE; // 0xA0
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0xA8
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0xB0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0xB8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0xC0
	::CPABOPKIGAL* HIEMBEABMPO; // 0xC8
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0xD0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0xD8
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0xE0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDHPGHGJIP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDHPGHGJIP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DBDHPGHGJIP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDHPGHGJIP_GDEOPIBNOIN_OFFSET))(this);
	}
};
