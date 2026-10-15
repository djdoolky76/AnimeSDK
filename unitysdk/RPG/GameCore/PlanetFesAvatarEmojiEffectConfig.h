#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarEmojiEffectConfig; }
namespace RPG::GameCore { class PlanetFesAvatarEmojiEffectInfo; }

#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F3260)
#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F3170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarEmojiEffectConfig_TypeDefinitionIndex = 16256;

	class PlanetFesAvatarEmojiEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*>* EmojiEffectList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarEmojiEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarEmojiEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
