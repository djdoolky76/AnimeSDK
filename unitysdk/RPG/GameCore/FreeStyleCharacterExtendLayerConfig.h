#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleCharacterExtendLayerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F3CF0)
#define RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F3BF0)

namespace RPG::GameCore
{
	class FreeStyleCharacterExtendLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* LayerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleCharacterExtendLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
