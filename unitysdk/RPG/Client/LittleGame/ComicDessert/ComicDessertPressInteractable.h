#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertInteractable.h"
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0xDE8C220)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xDE8B800)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDE8BEC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xDE8B1D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xDE8BBB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xDE8B850)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_RESETTOOUTOFGAMESTATE_OFFSET UNITYSDK_OFFSET(0xDE8C1B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDE8B5E0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertPressInteractable_TypeDefinitionIndex = 79771;

	class ComicDessertPressInteractable : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertInteractable
	{
	public:
		::System::Boolean IDAEFCMDGBN; // 0x20
		::System::Boolean KFGJPLKEGEO; // 0x21
		::System::Boolean DPPCKPGACCJ; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 IHGHMCDEJEG; // 0x24
		::System::Single LNIDGKHGLKJ; // 0x28
		// static const ::System::Object JGDGFLLLGKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_CTOR_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void ResetToOutOfGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_RESETTOOUTOFGAMESTATE_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTPRESSINTERACTABLE_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
}
