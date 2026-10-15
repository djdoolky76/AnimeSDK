#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPauseMusicAction; }

#define RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CFB10)
#define RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CFB20)
#define RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CFAA0)

namespace RPG::GameCore
{
	class FiveDimPauseMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
