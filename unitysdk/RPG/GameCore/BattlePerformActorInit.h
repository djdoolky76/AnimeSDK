#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformActorInit; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMACTORINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4646C0)
#define RPG_GAMECORE_BATTLEPERFORMACTORINIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D464570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformActorInit_TypeDefinitionIndex = 18147;

	class BattlePerformActorInit : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* InitKey; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoadTaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMACTORINIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformActorInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformActorInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMACTORINIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
