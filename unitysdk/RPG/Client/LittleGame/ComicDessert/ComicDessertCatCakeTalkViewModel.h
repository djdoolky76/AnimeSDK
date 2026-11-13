#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ComicDessert { class ViewModelEventHandler; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E13F0E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13F250)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1E13F0C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1E13F0A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E13F140)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_SETTALK_OFFSET UNITYSDK_OFFSET(0x1E13F1A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x1E13F0D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1E13F0B0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertCatCakeTalkViewModel_TypeDefinitionIndex = 80106;

	class ComicDessertCatCakeTalkViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnRefresh; // 0x10
		::System::String* _TextID_k__BackingField; // 0x18
		::System::Boolean _Visible_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::String* get_TextID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_SET_TEXTID_OFFSET))(this, a1);
		}

		::System::Void add_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void SetTalk(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCATCAKETALKVIEWMODEL_SETTALK_OFFSET))(this, a1, a2);
		}

	};
}
