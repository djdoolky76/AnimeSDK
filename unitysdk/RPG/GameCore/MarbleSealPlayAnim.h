#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealPlayAnim; }

#define RPG_GAMECORE_MARBLESEALPLAYANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8472B0)
#define RPG_GAMECORE_MARBLESEALPLAYANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8472C0)
#define RPG_GAMECORE_MARBLESEALPLAYANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D847280)

namespace RPG::GameCore
{
	class MarbleSealPlayAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealPlayAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealPlayAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealPlayAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealPlayAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
