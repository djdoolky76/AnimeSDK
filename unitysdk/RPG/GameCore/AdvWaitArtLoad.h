#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvWaitArtLoad; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVWAITARTLOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D386C50)
#define RPG_GAMECORE_ADVWAITARTLOAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D386C80)
#define RPG_GAMECORE_ADVWAITARTLOAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitArtLoad_TypeDefinitionIndex = 22049;

	class AdvWaitArtLoad : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoad; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITARTLOAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitArtLoad* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitArtLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITARTLOAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitArtLoad* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitArtLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITARTLOAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
