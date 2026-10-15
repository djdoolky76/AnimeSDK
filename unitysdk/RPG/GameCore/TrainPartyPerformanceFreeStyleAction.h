#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformanceFreeStyleAction; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC06CE0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC06B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceFreeStyleAction_TypeDefinitionIndex = 16262;

	class TrainPartyPerformanceFreeStyleAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ActionName; // 0x10
		::Il2CppArray<::System::UInt32>* MotionIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceFreeStyleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
