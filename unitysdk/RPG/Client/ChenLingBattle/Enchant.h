#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GACKCPEPDAF;
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::GameCore { class ChenLingEnchantRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_CREATE_OFFSET UNITYSDK_OFFSET(0xCA55F90)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_CTOR_OFFSET UNITYSDK_OFFSET(0xCA56040)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GETDESC_OFFSET UNITYSDK_OFFSET(0xCA56090)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCA56180)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCA56240)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCA56300)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCA56320)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA561D0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xCA562B0)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCA56310)
#define RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCA56330)

namespace RPG::Client::ChenLingBattle
{
	class Enchant : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingEnchantRow* _Config; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x18
		::System::UInt32 _MaxLevel_k__BackingField; // 0x1C
		::System::Void _ctor(::GACKCPEPDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GACKCPEPDAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::Enchant* Create(::GACKCPEPDAF* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Enchant*(*)(::GACKCPEPDAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_CREATE_OFFSET))(a1);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_CONFIGID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENCHANT_SET_MAXLEVEL_OFFSET))(this, a1);
		}

	};
}
