#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }
namespace RPG::GameCore { class ChimeraEventHandlers; }

#define RPG_GAMECORE_CHIMERAEVENTHANDLERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AD250)
#define RPG_GAMECORE_CHIMERAEVENTHANDLERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AD160)

namespace RPG::GameCore
{
	class ChimeraEventHandlers : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>* Handlers; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVENTHANDLERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraEventHandlers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraEventHandlers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVENTHANDLERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
