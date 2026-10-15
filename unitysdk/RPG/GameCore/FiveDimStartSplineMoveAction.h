#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartSplineMoveAction; }

#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DE990)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DE9A0)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DE920)

namespace RPG::GameCore
{
	class FiveDimStartSplineMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartSplineMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartSplineMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
