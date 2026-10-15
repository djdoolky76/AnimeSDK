#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8DA0)
#define RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B8BC0)

namespace RPG::GameCore
{
	class LevelNPCStillConfigData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleCharacterID; // 0x10
		::System::String* AnimationClipPath; // 0x18
		::System::Int32 Frame; // 0x20
		::System::Single NormalizedTime; // 0x24
		::RPG::GameCore::ColliderConfig* ColliderConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCStillConfigData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCStillConfigData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSTILLCONFIGDATA_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
