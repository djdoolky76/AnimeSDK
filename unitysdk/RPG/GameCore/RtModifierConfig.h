#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class RtDynamicValueRangeGroup; }
namespace RPG::GameCore { class RtModifierCallbackConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RTMODIFIERCONFIG_AHMHJEBHFLE_OFFSET UNITYSDK_OFFSET(0x1DA62160)
#define RPG_GAMECORE_RTMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA619A0)
#define RPG_GAMECORE_RTMODIFIERCONFIG_GKOKGHOCPOA_1_OFFSET UNITYSDK_OFFSET(0x1DA62050)
#define RPG_GAMECORE_RTMODIFIERCONFIG_GKOKGHOCPOA_OFFSET UNITYSDK_OFFSET(0x1DA61FB0)
#define RPG_GAMECORE_RTMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA619E0)
#define RPG_GAMECORE_RTMODIFIERCONFIG_OHHMDHPILFB_OFFSET UNITYSDK_OFFSET(0x1DA62210)
#define RPG_GAMECORE_RTMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA61940)
#define RPG_GAMECORE_RTMODIFIERCONFIG_PDOJECDDPAA_OFFSET UNITYSDK_OFFSET(0x1DA621B0)

namespace RPG::GameCore
{
	class RtModifierConfig : public ::RPG::GameCore::ModifierConfig
	{
	public:
		::RPG::GameCore::FixPoint LifeTime; // 0x38
		::System::Int32 MaxLayer; // 0x40
		::System::Int32 LayerAddWhenStack; // 0x44
		::RPG::GameCore::FixPoint TickInterval; // 0x48
		::System::String* EffectPriority; // 0x50
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* BehaviorFlagList; // 0x58
		::Il2CppArray<::RPG::GameCore::RtModifierCallbackConfig*>* _CallbackList; // 0x60
		::Il2CppArray<::RPG::GameCore::RtDynamicValueRangeGroup*>* OnDynamicValueChange; // 0x68
		::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>* OnAbilityPropertyChange; // 0x70
		::System::Boolean IsGlobalModifier; // 0x78
		static ::Il2CppArray<::System::String*>** StaticGet__RtModifierEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RtModifierConfig")->GetStaticField(0x70120);
		}

		static ::Il2CppArray<::System::String*>** StaticGet__RtModifierEventPriorityNameList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "RtModifierConfig")->GetStaticField(0x70128);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean GKOKGHOCPOA(::RPG::GameCore::RtBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_GKOKGHOCPOA_OFFSET))(this, a1);
		}

		::System::Boolean GKOKGHOCPOA_1(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_GKOKGHOCPOA_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtModifierCallbackConfig* AHMHJEBHFLE(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::RPG::GameCore::RtModifierCallbackConfig*(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_AHMHJEBHFLE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PDOJECDDPAA(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_PDOJECDDPAA_OFFSET))(this, a1);
		}

		::System::Boolean OHHMDHPILFB(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERCONFIG_OHHMDHPILFB_OFFSET))(this, a1);
		}

	};
}
