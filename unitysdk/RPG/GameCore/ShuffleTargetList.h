#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShuffleTargetList; }

#define RPG_GAMECORE_SHUFFLETARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB3E0)
#define RPG_GAMECORE_SHUFFLETARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABB3F0)
#define RPG_GAMECORE_SHUFFLETARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABB320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShuffleTargetList_TypeDefinitionIndex = 22469;

	class ShuffleTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHUFFLETARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShuffleTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShuffleTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHUFFLETARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShuffleTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShuffleTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHUFFLETARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
