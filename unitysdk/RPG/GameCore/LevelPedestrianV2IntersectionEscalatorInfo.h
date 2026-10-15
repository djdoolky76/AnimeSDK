#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionEscalatorInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C71F0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C7200)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C71C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionEscalatorInfo_TypeDefinitionIndex = 17299;

	class LevelPedestrianV2IntersectionEscalatorInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 BindEntityGroupID; // 0x50
		::System::UInt32 BindEntityGroupInstanceID; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
