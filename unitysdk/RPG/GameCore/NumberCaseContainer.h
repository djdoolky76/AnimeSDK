#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NumberCaseContainer; }

#define RPG_GAMECORE_NUMBERCASECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DE520)
#define RPG_GAMECORE_NUMBERCASECONTAINER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DE530)
#define RPG_GAMECORE_NUMBERCASECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DE4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumberCaseContainer_TypeDefinitionIndex = 17533;

	class NumberCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NumberCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NumberCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NumberCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NumberCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
