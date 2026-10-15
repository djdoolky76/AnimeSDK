#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParallelCompleteConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELCOMPLETECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BF440)
#define RPG_GAMECORE_PARALLELCOMPLETECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BF450)
#define RPG_GAMECORE_PARALLELCOMPLETECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BF410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelCompleteConfig_TypeDefinitionIndex = 23783;

	class ParallelCompleteConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCOMPLETECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelCompleteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCOMPLETECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelCompleteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCOMPLETECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
