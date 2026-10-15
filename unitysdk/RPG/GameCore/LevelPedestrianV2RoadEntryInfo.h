#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C9090)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadEntryInfo_TypeDefinitionIndex = 17292;

	class LevelPedestrianV2RoadEntryInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RoadIndex; // 0x10
		::System::Boolean Reverse; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
