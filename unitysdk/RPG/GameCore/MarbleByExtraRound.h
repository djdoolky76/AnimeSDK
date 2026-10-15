#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByExtraRound; }

#define RPG_GAMECORE_MARBLEBYEXTRAROUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80C390)
#define RPG_GAMECORE_MARBLEBYEXTRAROUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80C3A0)
#define RPG_GAMECORE_MARBLEBYEXTRAROUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80C340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByExtraRound_TypeDefinitionIndex = 16893;

	class MarbleByExtraRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByExtraRound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByExtraRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByExtraRound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByExtraRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
