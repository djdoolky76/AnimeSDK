#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleBlockUIStyle.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleMonsterBehaviorFlagShieldData; }
namespace RPG::Client { class IBattleMonsterBehaviorFlagShieldStyle; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1E3BD0)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E3CF0)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1E4540)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GETHASSHIELD_OFFSET UNITYSDK_OFFSET(0x1B1E47C0)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B1E4140)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x1B1E4520)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GET_TRANSFORMORDER_OFFSET UNITYSDK_OFFSET(0x1B1E4010)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_ISTARGETMODIFIER_OFFSET UNITYSDK_OFFSET(0x1B1E4820)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_SET_STYLE_OFFSET UNITYSDK_OFFSET(0x1B1E4530)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_UPDATEENTITY_OFFSET UNITYSDK_OFFSET(0x1B1E4770)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B1E3DA0)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__GETUISTYLE_OFFSET UNITYSDK_OFFSET(0x1B1E41E0)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1B1E3E80)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__ONBATTLECHARACTERADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1B1E4A60)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__ONBATTLECHARACTERREMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1B1E4B40)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B1E4600)
#define RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__RESET_OFFSET UNITYSDK_OFFSET(0x1B1E46E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterBehaviorFlagShieldData_TypeDefinitionIndex = 73767;

	class BattleMonsterBehaviorFlagShieldData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* _ModifierInstances; // 0x10
		::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* _Style_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Entity; // 0x20
		::System::Boolean _AddedHandlers; // 0x28
		// static const ::System::String* _PREFAB_PATH_REALITY_SHOW; // 0x0
		// static const ::System::String* _PREFAB_PATH_REALITY_SHOW_MINI; // 0x0
		// static const ::System::String* _PREFAB_PATH_FALLEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleMonsterBehaviorFlagShieldData* Create(::RPG::GameCore::GameEntity* a1, ::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* a2)
		{
			return ((::RPG::Client::BattleMonsterBehaviorFlagShieldData*(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 get_TransformOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GET_TRANSFORMORDER_OFFSET))(this);
		}

		::System::String* GetPrefabPath(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GETPREFABPATH_OFFSET))(this, a1);
		}

		::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* get_Style()
		{
			return ((::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GET_STYLE_OFFSET))(this);
		}

		::System::Void set_Style(::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_SET_STYLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_UPDATEENTITY_OFFSET))(this, a1);
		}

		::System::Boolean GetHasShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_GETHASSHIELD_OFFSET))(this);
		}

		::System::Boolean IsTargetModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA_ISTARGETMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__INIT_OFFSET))(this);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__RESET_OFFSET))(this);
		}

		::RPG::GameCore::SingleBlockUIStyle _GetUIStyle()
		{
			return ((::RPG::GameCore::SingleBlockUIStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__GETUISTYLE_OFFSET))(this);
		}

		::System::Void _OnBattleCharacterAddModifier(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__ONBATTLECHARACTERADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCharacterRemoveModifier(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERBEHAVIORFLAGSHIELDDATA__ONBATTLECHARACTERREMOVEMODIFIER_OFFSET))(this, a1);
		}

	};
}
