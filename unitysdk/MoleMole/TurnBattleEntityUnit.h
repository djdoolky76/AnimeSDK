#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNJBJKHDCJ.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/TurnBattleUnitBase.h"
#include "unitysdk/NEOHMGDKACL.h"
#include "unitysdk/System/ValueTuple_2.h"

class FCICALKKEFA;
class LDFHCNHINCB;
class MENMIHAMGKH;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET UNITYSDK_OFFSET(0x13F2AF50)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x13F2D4C0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET UNITYSDK_OFFSET(0x13F2DB50)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x13F2AFA0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x13F2B1B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x13F2AEE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x13F2AFC0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET UNITYSDK_OFFSET(0x13F2D3A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET UNITYSDK_OFFSET(0x13F2DCE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x13F2AF00)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13F2D120)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x13F2B6A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x13F2B4A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x13F2B550)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x13F2CFE0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x13F2C150)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x13F2CE10)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x13F2C1A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET UNITYSDK_OFFSET(0x13F2C480)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET UNITYSDK_OFFSET(0x13F2D1A0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x13F2C6B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x13F2AEF0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x13F2AFD0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET UNITYSDK_OFFSET(0x13F2D410)
#define MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x13F2D6E0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2B210)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET UNITYSDK_OFFSET(0x13F2E6B0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET UNITYSDK_OFFSET(0x13F2E740)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET UNITYSDK_OFFSET(0x13F2E7D0)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x13F2E860)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET UNITYSDK_OFFSET(0x13F2E8F0)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit_TypeDefinitionIndex = 38686;

	class TurnBattleEntityUnit : public ::MoleMole::TurnBattleUnitBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::LDFHCNHINCB*>* SkillUseCountLog; // 0x10
		::FCICALKKEFA* MonsterInfoLog; // 0x18
		::MENMIHAMGKH* _sourceSnapshot; // 0x20
		::MoleMole::Battle::Entity* Entity; // 0x28
		::Il2CppArray<::BJNJBJKHDCJ>* Skills; // 0x30
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _skillOverrideQueue; // 0x38
		::System::Int32 CurSelectSkillIndex; // 0x40
		::System::Boolean _isCurrentMovementEnabled; // 0x44
		::System::Byte _padding0[0x3];
		::System::Single _SortWeight_k__BackingField; // 0x48

		::System::Void _ctor(::MENMIHAMGKH* sourceSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::MENMIHAMGKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT__CTOR_OFFSET))(this, sourceSnapshot);
		}

		::System::Single get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_SortWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SORTWEIGHT_OFFSET))(this, value);
		}

		::System::Single MoleMole_ITurnBattleUnitSortable_get_SortWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_MOLEMOLE_ITURNBATTLEUNITSORTABLE_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Boolean CanTransferToNextRound(::System::Int32 _)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRANSFERTONEXTROUND_OFFSET))(this, _);
		}

		::System::Int32 get_ConfigID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GET_ISENEMY_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnAddedToRound(::NEOHMGDKACL reason)
		{
			return ((::System::Void(*)(::PVOID, ::NEOHMGDKACL))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONADDEDTOROUND_OFFSET))(this, reason);
		}

		::System::Void OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNSTART_OFFSET))(this);
		}

		::System::Void OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONTURNOVER_OFFSET))(this);
		}

		::System::Void OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void OnPropertyValueChanged(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ONPROPERTYVALUECHANGED_OFFSET))(this, fighterID, type, customType, oldValue, newValue);
		}

		::MENMIHAMGKH* NewSnapshot()
		{
			return ((::MENMIHAMGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_NEWSNAPSHOT_OFFSET))(this);
		}

		::System::Void SetPlayerControl(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SETPLAYERCONTROL_OFFSET))(this, enabled);
		}

		::System::Void SetEntityMovementEnable(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_SETENTITYMOVEMENTENABLE_OFFSET))(this, enabled);
		}

		::System::Void OverrideSkill(::System::Int32 slotIdx, ::System::Int32 OverrideId, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_OVERRIDESKILL_OFFSET))(this, slotIdx, OverrideId, force);
		}

		::System::Boolean HasSkill(::System::Int32 skillIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_HASSKILL_OFFSET))(this, skillIndex);
		}

		::System::Boolean TriggerSkillByIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILLBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean CanTriggerSkillByIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_CANTRIGGERSKILLBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean TriggerSkill(::BJNJBJKHDCJ skill)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJNJBJKHDCJ))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_TRIGGERSKILL_OFFSET))(this, skill);
		}

		::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>* GetSkillFilter(::System::Int32 skillIndex, ::System::Boolean ignoreRange, ::System::Boolean ignoreBlock)
		{
			return ((::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_GETSKILLFILTER_OFFSET))(this, skillIndex, ignoreRange, ignoreBlock);
		}

		::System::Boolean IsSkillTargetValid(::BJNJBJKHDCJ skill, ::MoleMole::TurnBattleEntityUnit* target, ::System::Int32& errorCode, ::System::Boolean ignoreRange, ::System::Boolean ignoreBlock)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJNJBJKHDCJ, ::MoleMole::TurnBattleEntityUnit*, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT_ISSKILLTARGETVALID_OFFSET))(this, skill, target, errorCode, ignoreRange, ignoreBlock);
		}

		::System::Void __base_OnAddedToRound(::NEOHMGDKACL P0)
		{
			return ((::System::Void(*)(::PVOID, ::NEOHMGDKACL))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONADDEDTOROUND_OFFSET))(this, P0);
		}

		::System::Void __base_OnRemovedFromRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONREMOVEDFROMROUND_OFFSET))(this);
		}

		::System::Void __base_OnRoundStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONROUNDSTART_OFFSET))(this);
		}

		::System::Void __base_OnTurnOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNOVER_OFFSET))(this);
		}

		::System::Void __base_OnTurnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___BASE_ONTURNSTART_OFFSET))(this);
		}
	};
}
