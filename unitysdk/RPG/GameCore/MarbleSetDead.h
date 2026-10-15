#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetDead; }

#define RPG_GAMECORE_MARBLESETDEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D848320)
#define RPG_GAMECORE_MARBLESETDEAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D848330)
#define RPG_GAMECORE_MARBLESETDEAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D848290)

namespace RPG::GameCore
{
	class MarbleSetDead : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
