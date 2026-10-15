#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSelectionCountValueGetter; }

#define RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57C3B0)
#define RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57C3C0)
#define RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57C2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSelectionCountValueGetter_TypeDefinitionIndex = 16000;

	class ChimeraDuelSelectionCountValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Selection; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
