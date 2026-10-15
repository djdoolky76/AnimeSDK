#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateCaseContainer; }

#define RPG_GAMECORE_PROPSTATECASECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9584D0)
#define RPG_GAMECORE_PROPSTATECASECONTAINER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9584E0)
#define RPG_GAMECORE_PROPSTATECASECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9584A0)

namespace RPG::GameCore
{
	class PropStateCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::PropState Case; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateCaseContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
