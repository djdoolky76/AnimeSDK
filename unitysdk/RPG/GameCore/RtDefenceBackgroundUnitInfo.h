#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceBackgroundUnitInfo; }

#define RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5A790)
#define RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5A590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceBackgroundUnitInfo_TypeDefinitionIndex = 18065;

	class RtDefenceBackgroundUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint DirAngle; // 0x18
		::System::UInt32 UnitID; // 0x20
		::System::UInt32 Level; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceBackgroundUnitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceBackgroundUnitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBACKGROUNDUNITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
