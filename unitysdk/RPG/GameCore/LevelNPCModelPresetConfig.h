#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCModelPresetConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8010)
#define RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B77D0)

namespace RPG::GameCore
{
	class LevelNPCModelPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EyeCtrlKey; // 0x10
		::System::String* FaceExpressionKey; // 0x18
		::System::String* EyeBloomKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCModelPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCModelPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCMODELPRESETCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
