#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERATLASFACEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D569190)
#define RPG_GAMECORE_CHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D569080)

namespace RPG::GameCore
{
	class CharacterAtlasFaceEmotion : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshName; // 0x10
		::System::UInt32 EmotionIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
