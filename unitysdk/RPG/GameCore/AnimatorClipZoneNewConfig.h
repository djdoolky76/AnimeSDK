#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }
namespace RPG::GameCore { class AnimatorClipZoneNewConfig; }

#define RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C7010)
#define RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C6F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorClipZoneNewConfig_TypeDefinitionIndex = 16332;

	class AnimatorClipZoneNewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorClipZoneDescConfig*>* AnimatorClipZoneDescList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimatorClipZoneNewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
