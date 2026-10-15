#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartWindowStageAction; }

#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B12C0)
#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B12D0)
#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B1290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartWindowStageAction_TypeDefinitionIndex = 18722;

	class FiveDimStartWindowStageAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 WindowControllerEntityID; // 0x10
		::System::UInt32 PuzzleID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
