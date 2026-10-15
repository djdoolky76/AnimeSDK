#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }
namespace RPG::GameCore { class AnimatorStateZoneNewConfig; }

#define RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F50D0)
#define RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F5010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateZoneNewConfig_TypeDefinitionIndex = 16330;

	class AnimatorStateZoneNewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorStateZoneDescConfig*>* AnimatorStateZoneDescList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateZoneNewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateZoneNewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
