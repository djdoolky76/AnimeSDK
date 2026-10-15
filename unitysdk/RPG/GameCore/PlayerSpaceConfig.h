#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerSpaceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERSPACECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93C690)
#define RPG_GAMECORE_PLAYERSPACECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93C360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerSpaceConfig_TypeDefinitionIndex = 16398;

	class PlayerSpaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SpaceRTPC; // 0x10
		::System::String* SpaceRTPCAvatar; // 0x18
		::System::Single MaxSpaceRTPC; // 0x20
		::System::Single DefaultSpaceRTPC; // 0x24
		::System::String* LeftRightRTPC; // 0x28
		::System::String* LeftRightRTPCAvatar; // 0x30
		::System::Single MaxSideSpaceRTPC; // 0x38
		::System::Single DefaultSideSpaceRTPC; // 0x3C
		::System::Single RaycastAroundMaxDistance; // 0x40
		::System::Single RaycastTopMaxHeight; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSPACECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerSpaceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerSpaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSPACECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
