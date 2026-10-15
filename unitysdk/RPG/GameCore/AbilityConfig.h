#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbilityConfig; }
namespace RPG::GameCore { class TargetConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3111B0)
#define RPG_GAMECORE_ABILITYCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D3111C0)
#define RPG_GAMECORE_ABILITYCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D310F90)
#define RPG_GAMECORE_ABILITYCONFIG_GETTASKLISTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1D311480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityConfig_TypeDefinitionIndex = 15644;

	class AbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetConfig* TargetInfo; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAdd; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRemove; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x30
		::ENEIHJJPNPI* DynamicValues; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* TaskListTemplate; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* _TaskListTemplatesMap; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::RPG::GameCore::TaskListTemplate* GetTaskListTemplate(::System::String* a1)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCONFIG_GETTASKLISTTEMPLATE_OFFSET))(this, a1);
		}

	};
}
