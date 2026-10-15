#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueGambleLoadShowTex; }

#define RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99F0C0)
#define RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F0D0)
#define RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99F000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleLoadShowTex_TypeDefinitionIndex = 22103;

	class RogueGambleLoadShowTex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueGambleLoadShowTex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueGambleLoadShowTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueGambleLoadShowTex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueGambleLoadShowTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLELOADSHOWTEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
