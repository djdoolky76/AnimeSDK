#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimResumeMusicAction; }

#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D77B0)
#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D77C0)
#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7740)

namespace RPG::GameCore
{
	class FiveDimResumeMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
