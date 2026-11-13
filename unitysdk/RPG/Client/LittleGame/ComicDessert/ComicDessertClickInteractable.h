#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertInteractable.h"
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCLICKINTERACTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13FD00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCLICKINTERACTABLE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E13FA30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCLICKINTERACTABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1E13F260)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertClickInteractable_TypeDefinitionIndex = 79760;

	class ComicDessertClickInteractable : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertInteractable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCLICKINTERACTABLE_CTOR_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCLICKINTERACTABLE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCLICKINTERACTABLE_ONPOINTERCLICK_OFFSET))(this, a1);
		}

	};
}
