#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/UnitTriggerDetectColliderType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC463D0)
#define RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC45650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnitCustomTriggerConfig_TypeDefinitionIndex = 17600;

	class UnitCustomTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TriggerName; // 0x10
		::System::Boolean DefaultEnable; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* Radius; // 0x20
		::RPG::MVector3 CenterOffset; // 0x28
		::System::Boolean UseVerticalBound; // 0x34
		::System::Byte _padding1[0x3];
		::System::Single UpperBound; // 0x38
		::System::Single LowerBound; // 0x3C
		::System::Boolean UseSummonerAsCheckSource; // 0x40
		::System::Boolean NeedRaycast; // 0x41
		::System::Boolean NeedNavmeshCheck; // 0x42
		::System::Byte _padding2[0x1];
		::System::Single RayStartOffsetY; // 0x44
		::System::Boolean ForceSyncTargetToSever; // 0x48
		::System::Boolean DependOnServerTarget; // 0x49
		::System::Boolean IsSingle; // 0x4A
		::System::Byte _padding3[0x1];
		::RPG::GameCore::UnitTriggerDetectColliderType DetectColliderType; // 0x4C
		::RPG::GameCore::EntityType TargetEntityType; // 0x50
		::System::Byte _padding4[0x4];
		::RPG::GameCore::DynamicFloat* TargetGroupID; // 0x58
		::RPG::GameCore::DynamicFloat* TargetID; // 0x60
		::Il2CppArray<::RPG::GameCore::EntityType>* TargetTypes; // 0x68
		::RPG::GameCore::PredicateConfig* TargetFilter; // 0x70
		::System::Boolean OnlyCheckFilterOnEnter; // 0x78
		::System::Boolean DontExitAfterEnter; // 0x79
		::System::Byte _padding5[0x6];
		::System::String* ColliderRelativePath; // 0x80
		::System::Boolean DestroyAfterTriggered; // 0x88
		::System::Boolean DisableAfterTriggered; // 0x89
		::System::Byte _padding6[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnable; // 0x90
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerDisable; // 0x98
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0xA8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnterRollback; // 0xB0
		::System::Boolean BlockDialogueInRange; // 0xB8
		::System::Boolean DestroyAfterGraphEnd; // 0xB9
		::System::Boolean TriggerByFakeAvatar; // 0xBA
		::System::Boolean SkipFakeAvatar; // 0xBB
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnitCustomTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnitCustomTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITCUSTOMTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
