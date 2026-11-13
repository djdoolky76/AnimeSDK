#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3722B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_DLLPFKENBDA_OFFSET UNITYSDK_OFFSET(0x1C372160)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C372090)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1C3720E0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertUpgradeBlankClickCatcher_TypeDefinitionIndex = 79771;

	class ComicDessertUpgradeBlankClickCatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* DGDIMJEHJBM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Boolean DLLPFKENBDA(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTUPGRADEBLANKCLICKCATCHER_DLLPFKENBDA_OFFSET))(this, a1);
		}

	};
}
