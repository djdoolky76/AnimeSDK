#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class BattleRogueTournData; }

#define RPG_GAMECORE_BATTLEROGUETOURNDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF04D5C0)
#define RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xF04CF40)
#define RPG_GAMECORE_BATTLEROGUETOURNDATA_GET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0xF04D490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueTournData_TypeDefinitionIndex = 57532;

	class BattleRogueTournData : public ::System::Object
	{
	public:
		::System::UInt32 StyleExp; // 0x10
		::System::UInt32 StyleID; // 0x14
		::System::UInt32 StyleLevel; // 0x18
		::RPG::GameCore::RogueTournMode TournMode; // 0x1C
		::System::Double RawDifficultyRatio; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DifficultyRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_GET_DIFFICULTYRATIO_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueTournData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueTournData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET))(this);
		}

	};
}
