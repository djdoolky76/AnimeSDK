#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByIsDefender; }

#define RPG_GAMECORE_MARBLEBYISDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83A8B0)
#define RPG_GAMECORE_MARBLEBYISDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83A8C0)
#define RPG_GAMECORE_MARBLEBYISDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83A860)

namespace RPG::GameCore
{
	class MarbleByIsDefender : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByIsDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByIsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByIsDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByIsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
