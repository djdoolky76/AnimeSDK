#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class MonoPerformanceCRPCameraSplitScreenLineUIMarker; }
namespace RPG::Client { class SplitScreenVCControl; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FBHLNFLAIHP_AFJKDBKMDFG_OFFSET UNITYSDK_OFFSET(0x1569E6F0)
#define FBHLNFLAIHP_BFFKCJHLCCK_OFFSET UNITYSDK_OFFSET(0x1569E680)
#define FBHLNFLAIHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1569EBC0)
#define FBHLNFLAIHP_DFOAMIFGDJD_OFFSET UNITYSDK_OFFSET(0x1569E610)
#define FBHLNFLAIHP_DHJADKPIIPC_OFFSET UNITYSDK_OFFSET(0x1569E850)
#define FBHLNFLAIHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1569E590)
#define FBHLNFLAIHP_DLGECPDIAGO_OFFSET UNITYSDK_OFFSET(0x1569E7E0)
#define FBHLNFLAIHP_EFPCBKKCEAM_OFFSET UNITYSDK_OFFSET(0x1569E920)
#define FBHLNFLAIHP_FIOHDBBJIOB_OFFSET UNITYSDK_OFFSET(0x1569EA80)
#define FBHLNFLAIHP_FPLMHNIECGB_OFFSET UNITYSDK_OFFSET(0x1569E280)
#define FBHLNFLAIHP_GEEPABCMMHI_OFFSET UNITYSDK_OFFSET(0x1569E990)
#define FBHLNFLAIHP_HIHOLNOKFDL_OFFSET UNITYSDK_OFFSET(0x1569EB50)
#define FBHLNFLAIHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1569E290)
#define FBHLNFLAIHP_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1569E520)
#define FBHLNFLAIHP_LOEKPKCDPBF_OFFSET UNITYSDK_OFFSET(0x1569E330)
#define FBHLNFLAIHP_MMDJEJBIFHF_OFFSET UNITYSDK_OFFSET(0x1569E760)
#define FBHLNFLAIHP_OPFAFBIOLJO_OFFSET UNITYSDK_OFFSET(0x1569EA10)

	class FBHLNFLAIHP : public ::System::Object
	{
	public:
		::RPG::Client::MonoPerformanceCRPCameraSplitScreenLineUIMarker* BMGOEDKDLDI; // 0x10
		::RPG::Client::SplitScreenVCControl* DGLBFCMGINF; // 0x18
		::UnityEngine::GameObject* BFNGLBKMHMK; // 0x20
		// static const ::System::String* IDFMIHMADLI; // 0x0
		// static const ::System::String* AACJFBGOMAO; // 0x0
		// static const ::System::String* MCOHEPHLMPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_CTOR_OFFSET))(this);
		}

		::RPG::Client::SplitScreenVCControl* FPLMHNIECGB()
		{
			return ((::RPG::Client::SplitScreenVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_FPLMHNIECGB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean LOEKPKCDPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_LOEKPKCDPBF_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_DISPOSE_OFFSET))(this);
		}

		::System::Void DFOAMIFGDJD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_DFOAMIFGDJD_OFFSET))(this, a1);
		}

		::System::Void BFFKCJHLCCK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_BFFKCJHLCCK_OFFSET))(this, a1);
		}

		::System::Void AFJKDBKMDFG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_AFJKDBKMDFG_OFFSET))(this, a1);
		}

		::System::Void MMDJEJBIFHF(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_MMDJEJBIFHF_OFFSET))(this, a1);
		}

		::System::Void DLGECPDIAGO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_DLGECPDIAGO_OFFSET))(this, a1);
		}

		::System::Void DHJADKPIIPC(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_DHJADKPIIPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFPCBKKCEAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_EFPCBKKCEAM_OFFSET))(this, a1);
		}

		::System::Void GEEPABCMMHI(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_GEEPABCMMHI_OFFSET))(this, a1);
		}

		::System::Void OPFAFBIOLJO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_OPFAFBIOLJO_OFFSET))(this, a1);
		}

		::System::Void FIOHDBBJIOB(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_FIOHDBBJIOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HIHOLNOKFDL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBHLNFLAIHP_HIHOLNOKFDL_OFFSET))(this, a1);
		}

	};
