#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitSkillInput; }

#define RPG_GAMECORE_WAITSKILLINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1C40)
#define RPG_GAMECORE_WAITSKILLINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA1C50)
#define RPG_GAMECORE_WAITSKILLINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA1C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSkillInput_TypeDefinitionIndex = 20198;

	class WaitSkillInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureSkillType>* WaitInputType; // 0x18
		::System::Boolean WaitInteraction; // 0x20
		::System::Boolean CheckAllowUseSkill; // 0x21
		::System::Boolean CheckMPNeed; // 0x22
		::System::Boolean CacheMode; // 0x23
		::System::UInt32 CacheModePriority; // 0x24
		::RPG::GameCore::DynamicFloat* MaxWaitTime; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInput; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeout; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInteraction; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSkillInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSkillInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSkillInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSkillInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
