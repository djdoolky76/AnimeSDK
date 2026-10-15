#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }

#define RPG_GAMECORE_CHENLINGBUILDINGLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55C940)
#define RPG_GAMECORE_CHENLINGBUILDINGLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D55C790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBuildingLevelRow_TypeDefinitionIndex = 11063;

	class ChenLingBuildingLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 EffectID; // 0x14
		::System::UInt32 SkillID; // 0x18
		::System::UInt32 BuildingID; // 0x1C
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
