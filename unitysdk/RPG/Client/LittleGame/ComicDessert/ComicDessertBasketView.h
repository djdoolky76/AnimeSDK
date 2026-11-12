#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceView.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE79DD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_DPCMAEHEAPH_OFFSET UNITYSDK_OFFSET(0xDE79B40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDE79CF0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_SETPROPSTATE_OFFSET UNITYSDK_OFFSET(0xDE79AB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_SETRESTOCKSUCCESSEFFECT_OFFSET UNITYSDK_OFFSET(0xDE79D60)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertBasketView_TypeDefinitionIndex = 80081;

	class ComicDessertBasketView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView
	{
	public:
		::UnityEngine::Animator* _Animator; // 0xA8
		::UnityEngine::GameObject* _RestockSuccessEffect; // 0xB0
		::System::Int32 DLNIGFGLPLJ; // 0xB8
		::System::Int32 EODDIHFLCEG; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetPropState(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_SETPROPSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void SetRestockSuccessEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_SETRESTOCKSUCCESSEFFECT_OFFSET))(this, a1);
		}

		::System::Void DPCMAEHEAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTBASKETVIEW_DPCMAEHEAPH_OFFSET))(this);
		}

	};
}
