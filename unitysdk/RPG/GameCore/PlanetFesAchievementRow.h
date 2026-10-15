#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAchievementRow; }

#define RPG_GAMECORE_PLANETFESACHIEVEMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9202F0)
#define RPG_GAMECORE_PLANETFESACHIEVEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9201E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAchievementRow_TypeDefinitionIndex = 12223;

	class PlanetFesAchievementRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESACHIEVEMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAchievementRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAchievementRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESACHIEVEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
