#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB7FFF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB800A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESCGLOSSARYTERMIDS_OFFSET UNITYSDK_OFFSET(0x1CB80280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CB80210)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CB802D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CB800B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CB801A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1CB80150)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_RULETAG_OFFSET UNITYSDK_OFFSET(0x1CB80370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1CB80320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SPECIALRULEJSON_OFFSET UNITYSDK_OFFSET(0x1CB80100)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatSpecialRuleData_TypeDefinitionIndex = 78413;

	class DiceCombatSpecialRuleData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* _Row; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ID_OFFSET))(this);
		}

		::System::String* get_SpecialRuleJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SPECIALRULEJSON_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DescGlossaryTermIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESCGLOSSARYTERMIDS_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatWeatherShowType get_ShowType()
		{
			return ((::RPG::GameCore::DiceCombatWeatherShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatWeatherRuleTag get_RuleTag()
		{
			return ((::RPG::GameCore::DiceCombatWeatherRuleTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_RULETAG_OFFSET))(this);
		}

	};
}
