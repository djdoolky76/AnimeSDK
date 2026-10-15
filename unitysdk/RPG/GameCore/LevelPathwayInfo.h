#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPathwayInfo; }
namespace RPG::GameCore { class LevelPathwayLinkInfo; }

#define RPG_GAMECORE_LEVELPATHWAYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C02C0)
#define RPG_GAMECORE_LEVELPATHWAYINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C02D0)
#define RPG_GAMECORE_LEVELPATHWAYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C3310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPathwayInfo_TypeDefinitionIndex = 17252;

	class LevelPathwayInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::System::UInt32>* WaypointIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPathwayLinkInfo*>* WaypointGraph; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPathwayInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPathwayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPathwayInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPathwayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
