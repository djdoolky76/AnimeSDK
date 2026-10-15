#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByDefenderFeature; }

#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80C130)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80C140)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80C0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFeature_TypeDefinitionIndex = 16880;

	class MarbleByDefenderFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByDefenderFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByDefenderFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByDefenderFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByDefenderFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
