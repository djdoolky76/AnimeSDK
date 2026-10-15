#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamMovePhaseTalk; }

#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC568F0)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC56900)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC56830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamMovePhaseTalk_TypeDefinitionIndex = 20027;

	class TriggerPamMovePhaseTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
