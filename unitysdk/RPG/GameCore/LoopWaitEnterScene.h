#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitEnterScene; }

#define RPG_GAMECORE_LOOPWAITENTERSCENE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6750)
#define RPG_GAMECORE_LOOPWAITENTERSCENE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6760)
#define RPG_GAMECORE_LOOPWAITENTERSCENE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitEnterScene_TypeDefinitionIndex = 21185;

	class LoopWaitEnterScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTERSCENE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitEnterScene* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitEnterScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTERSCENE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitEnterScene* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitEnterScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTERSCENE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
