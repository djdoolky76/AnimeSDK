#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RandomSelectorCase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RANDOMSELECTORCASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96CDD0)
#define RPG_GAMECORE_RANDOMSELECTORCASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96CC40)

namespace RPG::GameCore
{
	class RandomSelectorCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x10
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::System::UInt32 Weight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTORCASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectorCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectorCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTORCASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
