#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarEmojiEffectInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D920DA0)
#define RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D920C20)

namespace RPG::GameCore
{
	class PlanetFesAvatarEmojiEffectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EffectID; // 0x10
		::System::Single Duration; // 0x14
		::System::String* EmojiEffectPrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarEmojiEffectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREMOJIEFFECTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
