#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class AGJFDPBLDDF;
class CJMCICODFBN;
class EBMELHKGPPM;
class FFNGHJHNBJJ;
class KBALNFBNAFI;
class LCMKKKOOFEE;
class PJOHHKCHGCH;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FGMCNOOCOBM_EGCICCIBADC_OFFSET UNITYSDK_OFFSET(0x171455B0)
#define FGMCNOOCOBM_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x17145600)
#define FGMCNOOCOBM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17145190)
#define FGMCNOOCOBM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x171454A0)
#define FGMCNOOCOBM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x171459D0)
#define FGMCNOOCOBM_MPHDKIBJIDE_OFFSET UNITYSDK_OFFSET(0x17145A60)
#define FGMCNOOCOBM_OAGGBKCIOPM_OFFSET UNITYSDK_OFFSET(0x17145300)
#define FGMCNOOCOBM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x171443C0)
#define FGMCNOOCOBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x171451E0)
#define FGMCNOOCOBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17145260)

inline static constexpr unsigned int FGMCNOOCOBM_TypeDefinitionIndex = 57731;

class FGMCNOOCOBM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xAA; // 0x0
	::LCMKKKOOFEE* JGKAFBJJGEI; // 0x48
	::AGJFDPBLDDF* EIILLOILPOI; // 0x50
	::AGJFDPBLDDF* LIGFMHJDNLK; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* MDLAFDOEIKC; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* DMBMCJHHKHC; // 0x68
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::KBALNFBNAFI*>* MAAJHFAEHCM; // 0x70
	::AGJFDPBLDDF* LBFOEGIGINB; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::FFNGHJHNBJJ*>* NNNGIOPNMMG; // 0x80
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::AGJFDPBLDDF*>* HOKPEEJMKEE; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* OKMEBCABMIG; // 0x90
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::PJOHHKCHGCH*>* FFOCCJCPDDJ; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* PEOFICFMODC; // 0xA0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::EBMELHKGPPM*>* FHEODJNAPKB; // 0xA8
	::System::Single JBODAGOGONA; // 0xB0
	::System::Boolean ECKAGANIKML; // 0xB4
	::System::Boolean EIJDAAJJMCL; // 0xB5
	::System::Boolean DJJGJFAGKKJ; // 0xB6

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGMCNOOCOBM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCNOOCOBM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_GETCLASSID_OFFSET))(this);
	}

	::System::Void OAGGBKCIOPM(::MoleMole::Config::DamageElementType EIILOAOBACD, ::System::Int32 MGHHLCADDGB, ::CJMCICODFBN* LLOBPJLIHBO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Int32, ::CJMCICODFBN*))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_OAGGBKCIOPM_OFFSET))(this, EIILOAOBACD, MGHHLCADDGB, LLOBPJLIHBO);
	}

	static ::FGMCNOOCOBM* JFDOOELFAOA()
	{
		return ((::FGMCNOOCOBM*(*)())((::PBYTE)hIl2Cpp + FGMCNOOCOBM_JFDOOELFAOA_OFFSET))();
	}

	::System::Void EGCICCIBADC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_EGCICCIBADC_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::CJMCICODFBN* LLOBPJLIHBO)
	{
		return ((::System::Void(*)(::PVOID, ::CJMCICODFBN*))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_GALGFCPKMGC_OFFSET))(this, LLOBPJLIHBO);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void MPHDKIBJIDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCNOOCOBM_MPHDKIBJIDE_OFFSET))(this);
	}
};
