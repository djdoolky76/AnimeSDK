#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByHitLeft; }

#define RPG_GAMECORE_MARBLEBYHITLEFT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80C7D0)
#define RPG_GAMECORE_MARBLEBYHITLEFT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80C7E0)
#define RPG_GAMECORE_MARBLEBYHITLEFT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80C780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByHitLeft_TypeDefinitionIndex = 16886;

	class MarbleByHitLeft : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByHitLeft* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByHitLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByHitLeft* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByHitLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
