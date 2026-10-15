#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"
class FHENBGFPCCB;
class HJOGEBFAPLE;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define HJOGEBFAPLE_AHIBEEOPDNI_OFFSET UNITYSDK_OFFSET(0x15D345E0)
#define HJOGEBFAPLE_CFJOGEIENOD_OFFSET UNITYSDK_OFFSET(0x15D355E0)
#define HJOGEBFAPLE_CLCLCECOAJM_OFFSET UNITYSDK_OFFSET(0x15D35520)
#define HJOGEBFAPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D33C60)
#define HJOGEBFAPLE_DBGHALDAJHP_OFFSET UNITYSDK_OFFSET(0x15D35380)
#define HJOGEBFAPLE_DOJEFBDOEED_OFFSET UNITYSDK_OFFSET(0x15D354B0)
#define HJOGEBFAPLE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x15D33A60)
#define HJOGEBFAPLE_HOHMAEKFJBB_OFFSET UNITYSDK_OFFSET(0x15D33F50)
#define HJOGEBFAPLE_IOBCOJONKKG_OFFSET UNITYSDK_OFFSET(0x15D34090)
#define HJOGEBFAPLE_JFLPOLLHFBL_OFFSET UNITYSDK_OFFSET(0x15D34950)
#define HJOGEBFAPLE_KAKPHFACMJI_OFFSET UNITYSDK_OFFSET(0x15D34290)
#define HJOGEBFAPLE_LJAPIDBAPLG_OFFSET UNITYSDK_OFFSET(0x15D34840)
#define HJOGEBFAPLE_LKPBOCDDOBA_OFFSET UNITYSDK_OFFSET(0x15D353E0)
#define HJOGEBFAPLE_MKCOGBJPFFC_OFFSET UNITYSDK_OFFSET(0x15D34CD0)
#define HJOGEBFAPLE_MMNFBOANBGG_OFFSET UNITYSDK_OFFSET(0x15D33DE0)
#define HJOGEBFAPLE_NDLGFPOJIDD_OFFSET UNITYSDK_OFFSET(0x15D34180)
#define HJOGEBFAPLE_ODEPIBFDCPO_OFFSET UNITYSDK_OFFSET(0x15D33F00)
#define HJOGEBFAPLE_ODPONMLNGBN_OFFSET UNITYSDK_OFFSET(0x15D34B20)
#define HJOGEBFAPLE_OHLMILIDEOP_OFFSET UNITYSDK_OFFSET(0x15D34680)
#define HJOGEBFAPLE_PDIIKAEFHBL_OFFSET UNITYSDK_OFFSET(0x15D34220)
#define HJOGEBFAPLE_PIOACOJPKKN_OFFSET UNITYSDK_OFFSET(0x15D35170)
#define HJOGEBFAPLE_PJKBDJPFLDG_OFFSET UNITYSDK_OFFSET(0x15D33E30)

	class HJOGEBFAPLE : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::UINavigation::UINavigation*>* HFAAKBPNHOJ; // 0x10
		::RPG::UINavigation::UINavigation* FAJFNAJPMLD; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::UINavigation::UINavigation*>* ONPNCFHLNMB; // 0x20
		::FHENBGFPCCB* EPJJGFNHKEM; // 0x28
		static ::HJOGEBFAPLE** StaticGet_FLMODBLFAGD()
		{
			return (::HJOGEBFAPLE**)UnitySDK::FromName("", "HJOGEBFAPLE")->GetStaticField(0x21EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_CTOR_OFFSET))(this);
		}

		static ::HJOGEBFAPLE* GGBLHEHJBDO()
		{
			return ((::HJOGEBFAPLE*(*)())((::PBYTE)hIl2Cpp + HJOGEBFAPLE_GGBLHEHJBDO_OFFSET))();
		}

		::RPG::UINavigation::UINavigationZone* MMNFBOANBGG()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_MMNFBOANBGG_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* ODEPIBFDCPO()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_ODEPIBFDCPO_OFFSET))(this);
		}

		::System::Void IOBCOJONKKG(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::AxisEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_IOBCOJONKKG_OFFSET))(this, a1, a2);
		}

		::System::Void AHIBEEOPDNI(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_AHIBEEOPDNI_OFFSET))(this, a1, a2);
		}

		::System::Boolean OHLMILIDEOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_OHLMILIDEOP_OFFSET))(this);
		}

		::System::Void LJAPIDBAPLG(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_LJAPIDBAPLG_OFFSET))(this, a1, a2);
		}

		::System::Void PIOACOJPKKN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_PIOACOJPKKN_OFFSET))(this, a1);
		}

		::System::Void DBGHALDAJHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_DBGHALDAJHP_OFFSET))(this);
		}

		::System::Boolean LKPBOCDDOBA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_LKPBOCDDOBA_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigation* DOJEFBDOEED(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_DOJEFBDOEED_OFFSET))(this, a1);
		}

		::System::Void CLCLCECOAJM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_CLCLCECOAJM_OFFSET))(this, a1);
		}

		::System::Boolean KAKPHFACMJI(::RPG::UINavigation::UINavigation* a1, ::FHENBGFPCCB* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::FHENBGFPCCB*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_KAKPHFACMJI_OFFSET))(this, a1, a2);
		}

		::FHENBGFPCCB* NDLGFPOJIDD()
		{
			return ((::FHENBGFPCCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_NDLGFPOJIDD_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* HOHMAEKFJBB()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_HOHMAEKFJBB_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* PJKBDJPFLDG()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_PJKBDJPFLDG_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationDirection PDIIKAEFHBL(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::RPG::UINavigation::UINavigationDirection(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_PDIIKAEFHBL_OFFSET))(this, a1);
		}

		::System::Void ODPONMLNGBN(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_ODPONMLNGBN_OFFSET))(this, a1);
		}

		::System::Void JFLPOLLHFBL(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_JFLPOLLHFBL_OFFSET))(this, a1);
		}

		::System::Boolean CFJOGEIENOD(::RPG::UINavigation::UINavigation* a1, ::RPG::UINavigation::UINavigation* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_CFJOGEIENOD_OFFSET))(this, a1, a2);
		}

		::System::Void MKCOGBJPFFC(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + HJOGEBFAPLE_MKCOGBJPFFC_OFFSET))(this, a1);
		}

	};
