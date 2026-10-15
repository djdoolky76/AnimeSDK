#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceMoveNextTurn; }

#define RPG_GAMECORE_CONVINCEMOVENEXTTURN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DEEE0)
#define RPG_GAMECORE_CONVINCEMOVENEXTTURN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DEEF0)
#define RPG_GAMECORE_CONVINCEMOVENEXTTURN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DEE20)

namespace RPG::GameCore
{
	class ConvinceMoveNextTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVENEXTTURN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMoveNextTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMoveNextTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVENEXTTURN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMoveNextTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMoveNextTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVENEXTTURN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
