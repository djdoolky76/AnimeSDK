#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelMasterIDValueGetter; }

#define RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5180)
#define RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A5190)
#define RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterIDValueGetter_TypeDefinitionIndex = 15994;

	class ChimeraDuelMasterIDValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
