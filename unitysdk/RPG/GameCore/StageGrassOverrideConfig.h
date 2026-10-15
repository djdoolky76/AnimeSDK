#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0D5E0)
#define RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB0D5F0)
#define RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB0D350)

namespace RPG::GameCore
{
	class StageGrassOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableGrass; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single overallDensityFactor; // 0x14
		::System::Boolean enableGrassDensityReduce; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single grassMaxDistance; // 0x1C
		::System::Single grassConstantDensityRangeFactor; // 0x20
		::System::Single grassDensityReduceFactor; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageGrassOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageGrassOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageGrassOverrideConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageGrassOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
