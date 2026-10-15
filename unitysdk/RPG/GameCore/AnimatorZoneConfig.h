#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimatorStateCustomZoneBinding; }
namespace RPG::GameCore { class AnimatorStateGroupZoneNewConfig; }
namespace RPG::GameCore { class AnimatorStateZoneNewConfig; }
namespace RPG::GameCore { class AnimatorZoneConfig; }

#define RPG_GAMECORE_ANIMATORZONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F5430)
#define RPG_GAMECORE_ANIMATORZONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F5310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorZoneConfig_TypeDefinitionIndex = 16334;

	class AnimatorZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorStateGroupZoneNewConfig* StateGroupZoneConfig; // 0x10
		::RPG::GameCore::AnimatorStateZoneNewConfig* StateZoneConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimatorStateCustomZoneBinding*>* StateCustomZoneBindings; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORZONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORZONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
