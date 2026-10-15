#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaselineAvatarPreloadConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D412E20)
#define RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D412C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaselineAvatarPreloadConfig_TypeDefinitionIndex = 16354;

	class BaselineAvatarPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AvatarAssetList; // 0x10
		::Il2CppArray<::System::String*>* NPCAssetList; // 0x18
		::Il2CppArray<::System::String*>* MonsterAssetList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaselineAvatarPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaselineAvatarPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
