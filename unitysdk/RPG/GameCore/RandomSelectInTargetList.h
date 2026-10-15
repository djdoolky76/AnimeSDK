#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomSelectInTargetList; }

#define RPG_GAMECORE_RANDOMSELECTINTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96C2A0)
#define RPG_GAMECORE_RANDOMSELECTINTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96C2B0)
#define RPG_GAMECORE_RANDOMSELECTINTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96C1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectInTargetList_TypeDefinitionIndex = 22472;

	class RandomSelectInTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTINTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectInTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectInTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTINTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectInTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectInTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTINTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
