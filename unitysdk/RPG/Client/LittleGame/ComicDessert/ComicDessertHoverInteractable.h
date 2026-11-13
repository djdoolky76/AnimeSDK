#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertInteractable.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/HoverKind.h"
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14DA70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E14D7F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1E14D2B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1E14D560)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertHoverInteractable_TypeDefinitionIndex = 79768;

	class ComicDessertHoverInteractable : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertInteractable
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::HoverKind _Mode; // 0x20
		::System::UInt32 _OriginSlotID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_CTOR_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTHOVERINTERACTABLE_ONDISABLE_OFFSET))(this);
		}

	};
}
