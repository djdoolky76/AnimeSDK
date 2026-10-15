#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSOUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92A330)
#define RPG_GAMECORE_PROPSOUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D929FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSoundConfig_TypeDefinitionIndex = 17558;

	class PropSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OnEnterTriggerEvent; // 0x10
		::System::String* OnExitTriggerEvent; // 0x18
		::System::Single EnterTriggerWaitTime; // 0x20
		::System::Boolean IsLoop; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropSoundAttenuation* SoundAttenuationConfig; // 0x28
		::System::Boolean IsOcclusion; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single DefaultTriggerRange; // 0x34
		::System::Boolean InRoomEmitter; // 0x38
		::System::Byte _padding2[0x7];
		::System::String* AudioSwichGroupName; // 0x40
		::System::String* AudioSwichName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
