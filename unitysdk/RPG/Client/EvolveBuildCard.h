#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::GameCore { class ActivityEvolveBuildCardRow; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDCARD_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xD7E6C60)
#define RPG_CLIENT_EVOLVEBUILDCARD_CREATE_OFFSET UNITYSDK_OFFSET(0xD7E6BF0)
#define RPG_CLIENT_EVOLVEBUILDCARD_CTOR_OFFSET UNITYSDK_OFFSET(0xD7E6C50)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_BGICON_OFFSET UNITYSDK_OFFSET(0xD7E7680)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_BIGBGICON_OFFSET UNITYSDK_OFFSET(0xD7E77A0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xD7E6D00)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD7E70E0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD7E6F20)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_ICON_OFFSET UNITYSDK_OFFSET(0xD7E7350)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_ID_OFFSET UNITYSDK_OFFSET(0xD7E6CE0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xD7E7DD0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xD7E78D0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_MINIBGICON_OFFSET UNITYSDK_OFFSET(0xD7E7710)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_MINIICON_OFFSET UNITYSDK_OFFSET(0xD7E7490)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD7E6E00)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xD7E73F0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xD7E6F90)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD7E75E0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_UNLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xD7E7A80)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0xD7E7830)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET__BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xD7E7300)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET__BUFFROW_OFFSET UNITYSDK_OFFSET(0xD7E6E70)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET__LEVELDATACMPT_OFFSET UNITYSDK_OFFSET(0xD7E71A0)
#define RPG_CLIENT_EVOLVEBUILDCARD_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD7E6DA0)
#define RPG_CLIENT_EVOLVEBUILDCARD_SET_ID_OFFSET UNITYSDK_OFFSET(0xD7E6CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCard_TypeDefinitionIndex = 65228;

	class EvolveBuildCard : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildCard* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildCard*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::EvolveBuildCard* CreateEmpty()
		{
			return ((::RPG::Client::EvolveBuildCard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_CREATEEMPTY_OFFSET))();
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_BUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SimpleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_SIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_ICON_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_SEASON_OFFSET))(this);
		}

		::System::String* get_MiniIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_MINIICON_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildCardType get_Type()
		{
			return ((::RPG::GameCore::EvolveBuildCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_BgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_BGICON_OFFSET))(this);
		}

		::System::String* get_MiniBgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_MINIBGICON_OFFSET))(this);
		}

		::System::String* get_BigBgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_BIGBGICON_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::String* get_UnlockCondition()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_UNLOCKCONDITION_OFFSET))(this);
		}

		::RPG::GameCore::LevelDataComponent* get__LevelDataCmpt()
		{
			return ((::RPG::GameCore::LevelDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET__LEVELDATACMPT_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::GameCore::ActivityEvolveBuildCardRow* get__Row()
		{
			return ((::RPG::GameCore::ActivityEvolveBuildCardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__BuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET__BUFFROW_OFFSET))(this);
		}

		::System::UInt32 get__BuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCARD_GET__BUFFLEVEL_OFFSET))(this);
		}

	};
}
