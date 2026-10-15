#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StackCrazyAIBehavior; }
namespace System { class String; }

#define RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD52D0)
#define RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD52E0)
#define RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD52A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackCrazyAIBehavior_TypeDefinitionIndex = 23639;

	class StackCrazyAIBehavior : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CrazyAIBehaviorPriority; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillLayoutKey>* ValidTypes; // 0x20
		::System::Boolean ChaosTargeting; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackCrazyAIBehavior* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackCrazyAIBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackCrazyAIBehavior* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackCrazyAIBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCRAZYAIBEHAVIOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
