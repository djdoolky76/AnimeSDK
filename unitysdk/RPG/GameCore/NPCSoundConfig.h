#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCSoundConfig; }
namespace RPG::GameCore { class NPCTriggerSound; }
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }

#define RPG_GAMECORE_NPCSOUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D2830)
#define RPG_GAMECORE_NPCSOUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D2650)

namespace RPG::GameCore
{
	class NPCSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::NPCTriggerSound*>* NPCTriggerEnterSound; // 0x10
		::System::Single defaultTriggerRange; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PropSoundAttenuation* SoundAttenuationConfig; // 0x20
		::System::String* NPCAudioSwichGroupName; // 0x28
		::System::String* NPCAudioSwichName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSOUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCSoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCSoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSOUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
