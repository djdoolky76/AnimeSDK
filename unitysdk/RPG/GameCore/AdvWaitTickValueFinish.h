#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvWaitTickValueFinish; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVWAITTICKVALUEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D387020)
#define RPG_GAMECORE_ADVWAITTICKVALUEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D387060)
#define RPG_GAMECORE_ADVWAITTICKVALUEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitTickValueFinish_TypeDefinitionIndex = 21028;

	class AdvWaitTickValueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinishCallback; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITTICKVALUEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitTickValueFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitTickValueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITTICKVALUEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitTickValueFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitTickValueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITTICKVALUEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
