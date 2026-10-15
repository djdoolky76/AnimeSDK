#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionConnectAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionStationInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79A910)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D79A920)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79AFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionStationInfo_TypeDefinitionIndex = 17301;

	class LevelPedestrianV2IntersectionStationInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 MaxMemberCount; // 0x50
		::System::UInt32 MaxSpawnMemberCount; // 0x54
		::System::String* BindStationName; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*>* AreaInfo; // 0x60
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*>* ConnectAreaInfo; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
