#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueFinish; }

#define RPG_GAMECORE_ROGUEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC470)
#define RPG_GAMECORE_ROGUEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9CC480)
#define RPG_GAMECORE_ROGUEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9CC3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueFinish_TypeDefinitionIndex = 21692;

	class RogueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
