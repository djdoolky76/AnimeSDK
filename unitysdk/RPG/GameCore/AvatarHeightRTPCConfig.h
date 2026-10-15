#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarHeightRTPCConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D417BC0)
#define RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D408D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarHeightRTPCConfig_TypeDefinitionIndex = 16402;

	class AvatarHeightRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single UpdateInterval; // 0x18
		::System::Single UpdateThreshold; // 0x1C
		::System::Single AbsValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarHeightRTPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarHeightRTPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARHEIGHTRTPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
