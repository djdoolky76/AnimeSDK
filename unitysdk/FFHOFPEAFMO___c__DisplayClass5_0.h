#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFHOFPEAFMO;
namespace RPG::GameCore { class PropSoundConfig; }

#define FFHOFPEAFMO___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1573EAC0)
#define FFHOFPEAFMO___C__DISPLAYCLASS5_0__SETUPPROPTRIGGERSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x1573F2E0)

inline static constexpr unsigned int FFHOFPEAFMO___c__DisplayClass5_0_TypeDefinitionIndex = 57258;

	class FFHOFPEAFMO___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropSoundConfig* propSoundConfig; // 0x10
		::FFHOFPEAFMO* __4__this; // 0x18
		::System::UInt32 overrideSoundConfigID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupPropTriggerSound_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHOFPEAFMO___C__DISPLAYCLASS5_0__SETUPPROPTRIGGERSOUND_B__0_OFFSET))(this);
		}

	};
