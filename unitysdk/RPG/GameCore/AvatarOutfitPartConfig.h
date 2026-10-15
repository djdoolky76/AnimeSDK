#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarOutfitPartConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATAROUTFITPARTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EAF70)
#define RPG_GAMECORE_AVATAROUTFITPARTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3EADF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarOutfitPartConfig_TypeDefinitionIndex = 16589;

	class AvatarOutfitPartConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshConfigPath; // 0x10
		::System::String* MaterialKey; // 0x18
		::System::Boolean IsStatic; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITPARTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarOutfitPartConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarOutfitPartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAROUTFITPARTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
