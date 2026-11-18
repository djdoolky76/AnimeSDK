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

#define GIAEBMJMALI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15CFC400)
#define GIAEBMJMALI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15CFBAF0)
#define GIAEBMJMALI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15CFCB40)
#define GIAEBMJMALI_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x15CFC3B0)
#define GIAEBMJMALI__CTOR_OFFSET UNITYSDK_OFFSET(0x15CFC460)

inline static constexpr unsigned int GIAEBMJMALI_TypeDefinitionIndex = 73285;

class GIAEBMJMALI : public ::BKCJAIFHNKF
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::NJDHJGDFLDI* PPFEHGIHLOK; // 0x20
	::MPJKPJAIOEM* EAMMDKDJFCM; // 0x28
	::MKBBPOFGLOF* EBIANHKCEKC; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* AEAHGMKOLME; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ABOJLAHGONK; // 0x40
	::CPABOPKIGAL* CAINIMPCMJE; // 0x48
	::MPJKPJAIOEM* AIJLLKNJPIO; // 0x50
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* IHGNEDFBDEE; // 0x58
	::NJDHJGDFLDI* PBCAAPOOIHO; // 0x60
	::CPABOPKIGAL* NANHAJLHEBH; // 0x68
	::MKBBPOFGLOF* HNJKGNLBPMK; // 0x70
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x78
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* AANDPGPAJPD; // 0x80
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BOEKOOHJJFB; // 0x88
	::MKBBPOFGLOF* GEDPNDHFCFK; // 0x90
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* BHKCGKHCBEJ; // 0x98
	::CPABOPKIGAL* HIEMBEABMPO; // 0xA0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LAGAAPMIBEP; // 0xA8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* IEMPJHJDICI; // 0xB0
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* HIJPPAMHHHJ; // 0xB8
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* LPEHBKCKLMM; // 0xC0
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Single>*>* OFPJJAMJAAM; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAEBMJMALI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAEBMJMALI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GIAEBMJMALI_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + GIAEBMJMALI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAEBMJMALI_GDEOPIBNOIN_OFFSET))(this);
	}
};
