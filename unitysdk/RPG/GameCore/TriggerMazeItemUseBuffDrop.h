#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerMazeItemUseBuffDrop; }

#define RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC275A0)
#define RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC275B0)
#define RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC27570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeItemUseBuffDrop_TypeDefinitionIndex = 21759;

	class TriggerMazeItemUseBuffDrop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeItemUseBuffDrop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeItemUseBuffDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeItemUseBuffDrop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeItemUseBuffDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEITEMUSEBUFFDROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
