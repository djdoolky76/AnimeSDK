#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGMDGMCJOBC.h"
#include "unitysdk/System/Object.h"

class CAIIAPOLAHM_DMAJOJPALHO;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CAIIAPOLAHM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14C6D240)
#define CAIIAPOLAHM_DJENDKENMPP_OFFSET UNITYSDK_OFFSET(0x14C6D670)
#define CAIIAPOLAHM_FCHIANLNKPN_OFFSET UNITYSDK_OFFSET(0x14C6E2C0)
#define CAIIAPOLAHM_GHFJEPCGHHK_OFFSET UNITYSDK_OFFSET(0x14C6E220)
#define CAIIAPOLAHM_HFBOHDECFIN_OFFSET UNITYSDK_OFFSET(0x14C6D2C0)
#define CAIIAPOLAHM_HMKCAMFNIOO_OFFSET UNITYSDK_OFFSET(0x14C6D5E0)
#define CAIIAPOLAHM_IFHJMEECDJF_OFFSET UNITYSDK_OFFSET(0x14C6D400)
#define CAIIAPOLAHM_JJBCDBFOCNN_OFFSET UNITYSDK_OFFSET(0x14C6D0C0)
#define CAIIAPOLAHM_KOACFDPMPNC_OFFSET UNITYSDK_OFFSET(0x14C6D540)
#define CAIIAPOLAHM_NIJMBEDDKNG_OFFSET UNITYSDK_OFFSET(0x14C6E2D0)
#define CAIIAPOLAHM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6D040)

inline static constexpr unsigned int CAIIAPOLAHM_TypeDefinitionIndex = 87360;

class CAIIAPOLAHM : public ::System::Object
{
public:
	::CAIIAPOLAHM_DMAJOJPALHO* ONJLBPLOLGE; // 0x10
	::CAIIAPOLAHM_DMAJOJPALHO* OBENOHNIICB; // 0x18
	::IGMDGMCJOBC _FPNHLCMIMPK_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIIAPOLAHM__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* JJBCDBFOCNN(::UnityEngine::GameObject* GIKMDKLJPLA)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_JJBCDBFOCNN_OFFSET))(GIKMDKLJPLA);
	}

	::System::Void BBOMJDBNHIC(::IGMDGMCJOBC BBCKKBBOBID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EPKKNJMIADC, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* OGDNFIIBKIK)
	{
		return ((::System::Void(*)(::PVOID, ::IGMDGMCJOBC, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_BBOMJDBNHIC_OFFSET))(this, BBCKKBBOBID, EPKKNJMIADC, OGDNFIIBKIK);
	}

	::System::Void KOACFDPMPNC(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_KOACFDPMPNC_OFFSET))(this, EIHKHEKBGLC);
	}

	static ::IGMDGMCJOBC DJENDKENMPP(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
	{
		return ((::IGMDGMCJOBC(*)(::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_DJENDKENMPP_OFFSET))(EIHKHEKBGLC);
	}

	static ::System::Boolean HMKCAMFNIOO(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC, ::CAIIAPOLAHM* INKPDIHEDKP)
	{
		return ((::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::CAIIAPOLAHM*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_HMKCAMFNIOO_OFFSET))(EIHKHEKBGLC, INKPDIHEDKP);
	}

	::System::Void HFBOHDECFIN(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_HFBOHDECFIN_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void IFHJMEECDJF(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_IFHJMEECDJF_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void GHFJEPCGHHK(::UnityEngine::EventSystems::PointerEventData* EIHKHEKBGLC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_GHFJEPCGHHK_OFFSET))(this, EIHKHEKBGLC);
	}

	::IGMDGMCJOBC FCHIANLNKPN()
	{
		return ((::IGMDGMCJOBC(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_FCHIANLNKPN_OFFSET))(this);
	}

	::System::Void NIJMBEDDKNG(::IGMDGMCJOBC EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IGMDGMCJOBC))((::PBYTE)hIl2Cpp + CAIIAPOLAHM_NIJMBEDDKNG_OFFSET))(this, EGEGIMGMJHN);
	}
};
