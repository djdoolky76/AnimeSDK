#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }

#define RPG_GAMECORE_CHENLINGBUILDINGLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F35D520)
#define RPG_GAMECORE_CHENLINGBUILDINGLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F35D370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBuildingLevelRow_TypeDefinitionIndex = 11079;

	class ChenLingBuildingLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 BuildingID; // 0x14
		::System::UInt32 EffectID; // 0x18
		::System::UInt32 SkillID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBUILDINGLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBuildingLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBuildingLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBUILDINGLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
