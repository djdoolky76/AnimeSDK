#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterFootIKConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D399A20)
#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3999E0)
#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D3999F0)
#define RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D398DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterFootIKConfig_TypeDefinitionIndex = 17435;

	class AdventureCharacterFootIKConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BlendInTime; // 0x10
		::System::Single BlendOutTime; // 0x14
		::System::Single FootHeightOffset; // 0x18
		static ::RPG::GameCore::AdventureCharacterFootIKConfig** StaticGet__Default_k__BackingField()
		{
			return (::RPG::GameCore::AdventureCharacterFootIKConfig**)UnitySDK::FromName("RPG.GameCore", "AdventureCharacterFootIKConfig")->GetStaticField(0x4F8F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterFootIKConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterFootIKConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AdventureCharacterFootIKConfig* get_Default()
		{
			return ((::RPG::GameCore::AdventureCharacterFootIKConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFOOTIKCONFIG_GET_DEFAULT_OFFSET))();
		}

	};
}
