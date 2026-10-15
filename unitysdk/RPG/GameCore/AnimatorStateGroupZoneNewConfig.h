#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimatorStateGroupZoneDescConfig; }
namespace RPG::GameCore { class AnimatorStateGroupZoneNewConfig; }

#define RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F4E70)
#define RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F4DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateGroupZoneNewConfig_TypeDefinitionIndex = 16331;

	class AnimatorStateGroupZoneNewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorStateGroupZoneDescConfig*>* AnimatorStateGroupZoneDescList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorStateGroupZoneNewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorStateGroupZoneNewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
