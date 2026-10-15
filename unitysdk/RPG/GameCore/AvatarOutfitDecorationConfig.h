#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarOutfitDecorationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EACA0)
#define RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3EABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitDecorationConfig_TypeDefinitionIndex = 16590;

	class AvatarOutfitDecorationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabConfigPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarOutfitDecorationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarOutfitDecorationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITDECORATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
