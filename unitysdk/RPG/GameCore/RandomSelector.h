#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomSelector; }
namespace RPG::GameCore { class RandomSelectorCase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RANDOMSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96CA70)
#define RPG_GAMECORE_RANDOMSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96CA80)
#define RPG_GAMECORE_RANDOMSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96CA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelector_TypeDefinitionIndex = 23777;

	class RandomSelector : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RandomSelectorCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Default; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
