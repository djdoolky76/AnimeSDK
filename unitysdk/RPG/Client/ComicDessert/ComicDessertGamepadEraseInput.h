#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertGamepadRevealMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client::ComicDessert { class ComicDessertEraseInputDriver; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C96B440)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_BMKAPOLLEPD_OFFSET UNITYSDK_OFFSET(0x1C96B770)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96BA40)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_FBELCMCFCMB_OFFSET UNITYSDK_OFFSET(0x1C96B640)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_NMMHEOAMEPC_OFFSET UNITYSDK_OFFSET(0x1C96B6A0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C96B360)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C96B210)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1C96B4F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1C96B5D0)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertGamepadEraseInput_TypeDefinitionIndex = 77149;

	class ComicDessertGamepadEraseInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ComicDessert::ComicDessertGamepadRevealMode RevealMode; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::ComicDessert::ComicDessertEraseInputDriver* EraseDriver; // 0x20
		::System::Single EraseSpeed; // 0x28
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Waypoints; // 0x30
		::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x38
		::System::Single EKCJIKEMAME; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void FBELCMCFCMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_FBELCMCFCMB_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector2> NMMHEOAMEPC()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_NMMHEOAMEPC_OFFSET))(this);
		}

		::UnityEngine::Vector2 BMKAPOLLEPD(::System::Single a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTGAMEPADERASEINPUT_BMKAPOLLEPD_OFFSET))(this, a1);
		}

	};
}
