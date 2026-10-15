#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesQuestGroupRow; }

#define RPG_GAMECORE_PLANETFESQUESTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92A740)
#define RPG_GAMECORE_PLANETFESQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92A5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesQuestGroupRow_TypeDefinitionIndex = 12225;

	class PlanetFesQuestGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::Il2CppArray<::System::UInt32>* RewardIDList; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESQUESTGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesQuestGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesQuestGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESQUESTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
