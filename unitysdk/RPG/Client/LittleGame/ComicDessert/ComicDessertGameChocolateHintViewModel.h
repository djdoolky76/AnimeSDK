#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class ViewModelEventHandler; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E14A890)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14A9D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_GET_CANPLACE_OFFSET UNITYSDK_OFFSET(0x1E14A870)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E14A8F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_SETCANPLACE_OFFSET UNITYSDK_OFFSET(0x1E14A950)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_SET_CANPLACE_OFFSET UNITYSDK_OFFSET(0x1E14A880)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertGameChocolateHintViewModel_TypeDefinitionIndex = 80119;

	class ComicDessertGameChocolateHintViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnRefresh; // 0x10
		::System::Boolean _CanPlace_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanPlace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_GET_CANPLACE_OFFSET))(this);
		}

		::System::Void set_CanPlace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_SET_CANPLACE_OFFSET))(this, a1);
		}

		::System::Void add_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void SetCanPlace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTGAMECHOCOLATEHINTVIEWMODEL_SETCANPLACE_OFFSET))(this, a1);
		}

	};
}
