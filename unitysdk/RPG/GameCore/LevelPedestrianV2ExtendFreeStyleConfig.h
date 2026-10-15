#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyle; }
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyleConfig; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4930)
#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ExtendFreeStyleConfig_TypeDefinitionIndex = 17319;

	class LevelPedestrianV2ExtendFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*>* Configs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
