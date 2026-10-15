#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackGroupCollectionConfig; }
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D796610)
#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D796530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ChenLingStackGroupCollectionConfig_TypeDefinitionIndex = 17321;

	class LevelPedestrianV2ChenLingStackGroupCollectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*>* StackGroupMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2ChenLingStackGroupCollectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2ChenLingStackGroupCollectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
