#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class StringCaseContainer; }

#define RPG_GAMECORE_STRINGCASECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFDFD0)
#define RPG_GAMECORE_STRINGCASECONTAINER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAFDFE0)
#define RPG_GAMECORE_STRINGCASECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAFDFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StringCaseContainer_TypeDefinitionIndex = 17534;

	class StringCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::DynamicString* Case; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StringCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StringCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StringCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StringCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
