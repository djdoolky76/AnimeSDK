#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackOffsetInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D796840)
#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D796620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ChenLingStackOffsetInfo_TypeDefinitionIndex = 17322;

	class LevelPedestrianV2ChenLingStackOffsetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 OffsetPosition; // 0x10
		::RPG::MVector3 OffsetRotation; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2ChenLingStackOffsetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKOFFSETINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
