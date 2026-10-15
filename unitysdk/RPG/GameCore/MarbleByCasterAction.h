#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCasterAction; }

#define RPG_GAMECORE_MARBLEBYCASTERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D838070)
#define RPG_GAMECORE_MARBLEBYCASTERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D838080)
#define RPG_GAMECORE_MARBLEBYCASTERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D838020)

namespace RPG::GameCore
{
	class MarbleByCasterAction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCasterAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCasterAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCasterAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCasterAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCASTERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
