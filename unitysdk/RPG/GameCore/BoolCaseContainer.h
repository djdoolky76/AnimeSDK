#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoolCaseContainer; }

#define RPG_GAMECORE_BOOLCASECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4483A0)
#define RPG_GAMECORE_BOOLCASECONTAINER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4483B0)
#define RPG_GAMECORE_BOOLCASECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D448370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoolCaseContainer_TypeDefinitionIndex = 17535;

	class BoolCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::System::Boolean Case; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoolCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoolCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoolCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoolCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
