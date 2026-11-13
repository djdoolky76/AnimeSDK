#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParallelSelectorConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F141B20)
#define RPG_GAMECORE_PARALLELSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F141B30)
#define RPG_GAMECORE_PARALLELSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F141AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelSelectorConfig_TypeDefinitionIndex = 24238;

	class ParallelSelectorConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
