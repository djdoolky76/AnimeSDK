#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GoNextTargetInList; }

#define RPG_GAMECORE_GONEXTTARGETINLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7208A0)
#define RPG_GAMECORE_GONEXTTARGETINLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7208B0)
#define RPG_GAMECORE_GONEXTTARGETINLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7207E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GoNextTargetInList_TypeDefinitionIndex = 22470;

	class GoNextTargetInList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GONEXTTARGETINLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GoNextTargetInList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GoNextTargetInList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GONEXTTARGETINLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GoNextTargetInList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GoNextTargetInList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GONEXTTARGETINLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
