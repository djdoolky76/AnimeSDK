#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertRestockBasketViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ViewModelEventHandler; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_ADD_ONNODEVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x1E152B70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E152AB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14C200)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_AUTORESTOCKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1E152A30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_BLUEBERRY_OFFSET UNITYSDK_OFFSET(0x1E152A70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_ISRESTOCKMODE_OFFSET UNITYSDK_OFFSET(0x1E1529F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_NODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E152A10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_STRAWBERRY_OFFSET UNITYSDK_OFFSET(0x1E152A50)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_TOFU_OFFSET UNITYSDK_OFFSET(0x1E152A90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_REMOVE_ONNODEVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0x1E152BD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E152B10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SETAUTORESTOCKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1E152D30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E152CB0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SETRESTOCKMODE_OFFSET UNITYSDK_OFFSET(0x1E152C30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_AUTORESTOCKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1E152A40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_BLUEBERRY_OFFSET UNITYSDK_OFFSET(0x1E152A80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_ISRESTOCKMODE_OFFSET UNITYSDK_OFFSET(0x1E152A00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_NODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E152A20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_STRAWBERRY_OFFSET UNITYSDK_OFFSET(0x1E152A60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_TOFU_OFFSET UNITYSDK_OFFSET(0x1E152AA0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertRestockViewModel_TypeDefinitionIndex = 80130;

	class ComicDessertRestockViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* _Tofu_k__BackingField; // 0x10
		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* _Strawberry_k__BackingField; // 0x18
		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* _Blueberry_k__BackingField; // 0x20
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnRefresh; // 0x28
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnNodeVisibleChanged; // 0x30
		::System::Boolean _IsRestockMode_k__BackingField; // 0x38
		::System::Boolean _NodeVisible_k__BackingField; // 0x39
		::System::Boolean _AutoRestockUnlocked_k__BackingField; // 0x3A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRestockMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_ISRESTOCKMODE_OFFSET))(this);
		}

		::System::Void set_IsRestockMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_ISRESTOCKMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_NodeVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_NODEVISIBLE_OFFSET))(this);
		}

		::System::Void set_NodeVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_NODEVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoRestockUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_AUTORESTOCKUNLOCKED_OFFSET))(this);
		}

		::System::Void set_AutoRestockUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_AUTORESTOCKUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* get_Strawberry()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_STRAWBERRY_OFFSET))(this);
		}

		::System::Void set_Strawberry(::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_STRAWBERRY_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* get_Blueberry()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_BLUEBERRY_OFFSET))(this);
		}

		::System::Void set_Blueberry(::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_BLUEBERRY_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* get_Tofu()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_GET_TOFU_OFFSET))(this);
		}

		::System::Void set_Tofu(::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertRestockBasketViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SET_TOFU_OFFSET))(this, a1);
		}

		::System::Void add_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void add_OnNodeVisibleChanged(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_ADD_ONNODEVISIBLECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnNodeVisibleChanged(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_REMOVE_ONNODEVISIBLECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetRestockMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SETRESTOCKMODE_OFFSET))(this, a1);
		}

		::System::Void SetNodeVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SETNODEVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetAutoRestockUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKVIEWMODEL_SETAUTORESTOCKUNLOCKED_OFFSET))(this, a1);
		}

	};
}
