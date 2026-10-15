#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParallelConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BF5A0)
#define RPG_GAMECORE_PARALLELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BF5B0)
#define RPG_GAMECORE_PARALLELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BF570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelConfig_TypeDefinitionIndex = 23781;

	class ParallelConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
