#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropReloadPuzzle; }

#define RPG_GAMECORE_PROPRELOADPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D952790)
#define RPG_GAMECORE_PROPRELOADPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9527A0)
#define RPG_GAMECORE_PROPRELOADPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9526D0)

namespace RPG::GameCore
{
	class PropReloadPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropReloadPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropReloadPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropReloadPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropReloadPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
