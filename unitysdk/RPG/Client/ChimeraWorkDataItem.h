#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }
namespace RPG::GameCore { class ChimeraWorkDataRow; }
namespace RPG::GameCore { class ChimeraWorkJsonConfig; }
namespace RPG::GameCore { class ChimeraWorkPhaseConfig; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERAWORKDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD4CD050)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ATK_OFFSET UNITYSDK_OFFSET(0xD4C58D0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_CLOSEATTACKVIEWPATH_OFFSET UNITYSDK_OFFSET(0xD4CD3B0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xD4C5710)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_DEFAULTHP_OFFSET UNITYSDK_OFFSET(0xD4C5760)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0xD4CD730)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xD4CD060)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_LEAVEJSON_OFFSET UNITYSDK_OFFSET(0xD4CD570)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ONFINISHCONFIG_OFFSET UNITYSDK_OFFSET(0xD4CD5D0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ONSTARTCONFIG_OFFSET UNITYSDK_OFFSET(0xD4B1BC0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_OVERRIDEHP_OFFSET UNITYSDK_OFFSET(0xD4CD410)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_PHASECONFIG_OFFSET UNITYSDK_OFFSET(0xD4CD6D0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_SPAWNVIEW_OFFSET UNITYSDK_OFFSET(0xD4B19E0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKICON_OFFSET UNITYSDK_OFFSET(0xD4CD4D0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKNAME_OFFSET UNITYSDK_OFFSET(0xD4CD2A0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKPREFAB_OFFSET UNITYSDK_OFFSET(0xD4CD430)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKVALUE_OFFSET UNITYSDK_OFFSET(0xD4CD630)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET__JSON_OFFSET UNITYSDK_OFFSET(0xD4CD0E0)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD4CD080)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xD4CD070)
#define RPG_CLIENT_CHIMERAWORKDATAITEM_SET_OVERRIDEHP_OFFSET UNITYSDK_OFFSET(0xD4CD420)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkDataItem_TypeDefinitionIndex = 64939;

	class ChimeraWorkDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Int32 _OverrideHp_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraWorkDataRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraWorkDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWorkJsonConfig* get__Json()
		{
			return ((::RPG::GameCore::ChimeraWorkJsonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET__JSON_OFFSET))(this);
		}

		::RPG::Client::TextID get_WorkName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKNAME_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityProgressBase* get_CloseAttackViewPath()
		{
			return ((::RPG::GameCore::ChimeraAbilityProgressBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_CLOSEATTACKVIEWPATH_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityProgressBase* get_SpawnView()
		{
			return ((::RPG::GameCore::ChimeraAbilityProgressBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_SPAWNVIEW_OFFSET))(this);
		}

		::System::Int32 get_Atk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ATK_OFFSET))(this);
		}

		::System::Int32 get_DefaultHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_DEFAULTHP_OFFSET))(this);
		}

		::System::Int32 get_OverrideHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_OVERRIDEHP_OFFSET))(this);
		}

		::System::Void set_OverrideHp(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_SET_OVERRIDEHP_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_CURRENTHP_OFFSET))(this);
		}

		::System::String* get_WorkPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKPREFAB_OFFSET))(this);
		}

		::System::String* get_WorkIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKICON_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityProgressBase* get_LeaveJson()
		{
			return ((::RPG::GameCore::ChimeraAbilityProgressBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_LEAVEJSON_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityProgressBase* get_OnFinishConfig()
		{
			return ((::RPG::GameCore::ChimeraAbilityProgressBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ONFINISHCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityProgressBase* get_OnStartConfig()
		{
			return ((::RPG::GameCore::ChimeraAbilityProgressBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_ONSTARTCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_WorkValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_WORKVALUE_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWorkPhaseConfig* get_PhaseConfig()
		{
			return ((::RPG::GameCore::ChimeraWorkPhaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_PHASECONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>* get_Handlers()
		{
			return ((::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKDATAITEM_GET_HANDLERS_OFFSET))(this);
		}

	};
}
