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

#define EOIEJHFMDHO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AB1190)
#define EOIEJHFMDHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AB0880)
#define EOIEJHFMDHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AB18D0)
#define EOIEJHFMDHO_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x14AB1140)
#define EOIEJHFMDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB11F0)

inline static constexpr unsigned int EOIEJHFMDHO_TypeDefinitionIndex = 52191;

class EOIEJHFMDHO : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x18
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x20
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x28
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x30
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x38
	::CPABOPKIGAL* HIEMBEABMPO; // 0x40
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x48
	::CPABOPKIGAL* NANHAJLHEBH; // 0x50
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0x58
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x60
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x68
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x70
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x78
	::CPABOPKIGAL* CAINIMPCMJE; // 0x80
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x88
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x90
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0x98
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0xA0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0xA8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0xB0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0xB8
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0xC0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIEJHFMDHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIEJHFMDHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EOIEJHFMDHO_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + EOIEJHFMDHO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIEJHFMDHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
