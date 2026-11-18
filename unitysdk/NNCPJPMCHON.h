#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNLELOLCNFG.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define NNCPJPMCHON_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1316C250)
#define NNCPJPMCHON_BIBHIODJGOE_OFFSET UNITYSDK_OFFSET(0x1316C4A0)
#define NNCPJPMCHON_BJPBOKFKIFI_OFFSET UNITYSDK_OFFSET(0x1316C400)
#define NNCPJPMCHON_DHFPPDFKILN_OFFSET UNITYSDK_OFFSET(0x1316C3C0)
#define NNCPJPMCHON_ILFIDKOAPOM_OFFSET UNITYSDK_OFFSET(0x1316C490)
#define NNCPJPMCHON_KJMIHAKNAKL_OFFSET UNITYSDK_OFFSET(0x1316C3A0)
#define NNCPJPMCHON_NAFJLPLDNII_OFFSET UNITYSDK_OFFSET(0x1316C300)
#define NNCPJPMCHON_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x1316C3B0)
#define NNCPJPMCHON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1316C2A0)
#define NNCPJPMCHON__CTOR_OFFSET UNITYSDK_OFFSET(0x1316C240)

inline static constexpr unsigned int NNCPJPMCHON_TypeDefinitionIndex = 85868;

class NNCPJPMCHON : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KBDDKCOLJHG; // 0x10
	::UnityEngine::Timeline::INapNotifyData* DIHNFECKHMD; // 0x18
	::System::Double INMHMLGFIIK; // 0x20
	::LNLELOLCNFG _HDOCGEGKCJK_k__BackingField; // 0x28
	::System::Boolean IHMIMBBFNHF; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Double FCMPFOAJJIB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Object* EIFONLCJOPG, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KPKHJIDHFKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + NNCPJPMCHON_BBOMJDBNHIC_OFFSET))(this, EIFONLCJOPG, KPKHJIDHFKP);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void NAFJLPLDNII(::UnityEngine::Timeline::INapNotifyData* LJBPECKCCEA, ::LNLELOLCNFG EHHEFPBKNBP, ::System::Double ADKJBKNMKBL, ::System::Double EAFDFCCBIJE, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KPKHJIDHFKP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*, ::LNLELOLCNFG, ::System::Double, ::System::Double, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + NNCPJPMCHON_NAFJLPLDNII_OFFSET))(this, LJBPECKCCEA, EHHEFPBKNBP, ADKJBKNMKBL, EAFDFCCBIJE, KPKHJIDHFKP);
	}

	::System::Double KJMIHAKNAKL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON_KJMIHAKNAKL_OFFSET))(this);
	}

	::LNLELOLCNFG ODGGIAADMLO()
	{
		return ((::LNLELOLCNFG(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON_ODGGIAADMLO_OFFSET))(this);
	}

	::System::Void DHFPPDFKILN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON_DHFPPDFKILN_OFFSET))(this);
	}

	::System::Void BJPBOKFKIFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON_BJPBOKFKIFI_OFFSET))(this);
	}

	::System::Void ILFIDKOAPOM(::LNLELOLCNFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LNLELOLCNFG))((::PBYTE)hIl2Cpp + NNCPJPMCHON_ILFIDKOAPOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double BIBHIODJGOE()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCPJPMCHON_BIBHIODJGOE_OFFSET))(this);
	}
};
