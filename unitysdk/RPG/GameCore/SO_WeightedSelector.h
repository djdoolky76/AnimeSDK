#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOCompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SOTaskConfig; }
namespace RPG::GameCore { class SO_WeightedSelector; }

#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6EE50)
#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6EE60)
#define RPG_GAMECORE_SO_WEIGHTEDSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70E90)

namespace RPG::GameCore
{
	class SO_WeightedSelector : public ::RPG::GameCore::SOCompositeConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Weights; // 0x28
		::Il2CppArray<::RPG::GameCore::SOTaskConfig*>* Tasks; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_WEIGHTEDSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
