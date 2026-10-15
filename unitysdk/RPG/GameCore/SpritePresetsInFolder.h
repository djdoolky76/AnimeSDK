#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpritePresetNameList; }
namespace RPG::GameCore { class SpritePresetsInFolder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPRITEPRESETSINFOLDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02120)
#define RPG_GAMECORE_SPRITEPRESETSINFOLDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB02020)

namespace RPG::GameCore
{
	class SpritePresetsInFolder : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SpritePresetNameList*>* Collection; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETSINFOLDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpritePresetsInFolder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpritePresetsInFolder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETSINFOLDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
