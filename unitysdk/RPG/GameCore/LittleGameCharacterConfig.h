#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameCharacterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE9E0)
#define RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DE800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCharacterConfig_TypeDefinitionIndex = 18891;

	class LittleGameCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::RPG::GameCore::LittleGameAttachPointConfig* AttachPointConfig; // 0x18
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x20
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
