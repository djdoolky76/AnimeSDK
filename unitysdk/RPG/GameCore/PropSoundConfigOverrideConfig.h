#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace RPG::GameCore { class PropSoundConfigOverrideConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D957DE0)
#define RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D957CB0)

namespace RPG::GameCore
{
	class PropSoundConfigOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Description; // 0x18
		::RPG::GameCore::PropSoundAttenuation* SoundAttenuationConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSoundConfigOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSoundConfigOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIGOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
