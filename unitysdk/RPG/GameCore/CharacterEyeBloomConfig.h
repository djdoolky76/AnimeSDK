#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D570550)
#define RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D570390)

namespace RPG::GameCore
{
	class CharacterEyeBloomConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EyeBloomIntensity; // 0x10
		::System::Boolean ChangeEyeEffect; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single EyeEffectProcs; // 0x18
		::System::Byte _padding1[0x4];
		::System::String* EyeEffectColor; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEyeBloomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEyeBloomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
