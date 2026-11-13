#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityValueGetterBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityBranchValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9284A0)
#define RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F9284B0)
#define RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F928450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityBranchValueGetter_TypeDefinitionIndex = 16080;

	class ChimeraDuelEntityBranchValueGetter : public ::RPG::GameCore::ChimeraDuelEntityValueGetterBase
	{
	public:
		::RPG::GameCore::ChimeraDuelEntityPredicateBase* Condition; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* True; // 0x18
		::RPG::GameCore::BaseChimeraDuelValueGetter* False; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
