#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class LEGNLMENMJK;
namespace RPG::Client::ChenLingBattle { class Building; }
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }
namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7BD7B0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BDA70)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x1D7BE2D0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETDESC_OFFSET UNITYSDK_OFFSET(0x1D7BDC90)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1D7BE200)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x1D7BE050)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1D7BDC40)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1D7BE120)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVELEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D7BE1C0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D7BDDE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1D7BE170)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1D7BDE40)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D7BDF70)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1D7BE1E0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1D7BDE90)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D7BDE30)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1D7BDB10)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_LEVELEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D7BE1D0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1D7BE1F0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Building_TypeDefinitionIndex = 78676;

	class Building : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBuildingRow* _Row; // 0x10
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x18
		::RPG::GameCore::ChenLingBuildingLevelRow* _LevelRow; // 0x20
		::System::UInt64 _LevelEffectID_k__BackingField; // 0x28
		::System::UInt32 _UniqueID_k__BackingField; // 0x30
		::System::UInt32 _SkillID_k__BackingField; // 0x34
		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::Building* Create(::LEGNLMENMJK* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Building*(*)(::LEGNLMENMJK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_CREATE_OFFSET))(a1);
		}

		::System::Void SetLevel(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SETLEVEL_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_UNIQUEID_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingCardType get_CardType()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CONFIGID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_InitialMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_INITIALMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt64 get_LevelEffectID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVELEFFECTID_OFFSET))(this);
		}

		::System::Void set_LevelEffectID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_LEVELEFFECTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDID_OFFSET))(this);
		}

		::System::UInt32 GetBattleScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETBATTLESCORE_OFFSET))(this);
		}

	};
}
