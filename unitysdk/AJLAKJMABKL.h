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

#define AJLAKJMABKL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x134D58D0)
#define AJLAKJMABKL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x134D4F30)
#define AJLAKJMABKL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x134D5FC0)
#define AJLAKJMABKL__CTOR_OFFSET UNITYSDK_OFFSET(0x134D5930)

inline static constexpr unsigned int AJLAKJMABKL_TypeDefinitionIndex = 46589;

class AJLAKJMABKL : public ::MHMFINLCNFN
{
public:
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0x30
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x38
	::CPABOPKIGAL* CAINIMPCMJE; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0x58
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x68
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x70
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x78
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x80
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x88
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x90
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x98
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0xA0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0xA8
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0xB0
	::HOFAIFGAHGJ* CLMPACKNCKI; // 0xB8
	::HOFAIFGAHGJ* DAHLKOMMEEF; // 0xC0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0xC8
	::HOFAIFGAHGJ* DNKGDFEDHBA; // 0xD0
	::CPABOPKIGAL* NANHAJLHEBH; // 0xD8
	::MKBBPOFGLOF* EBIANHKCEKC; // 0xE0
	::CPABOPKIGAL* HIEMBEABMPO; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLAKJMABKL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLAKJMABKL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJLAKJMABKL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLAKJMABKL_GDEOPIBNOIN_OFFSET))(this);
	}
};
