#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETMARBLEWAVEUPDATENOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0xE542170)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleWaveUpdateNotify_TypeDefinitionIndex = 67763;

	class PetMarbleWaveUpdateNotify : public ::System::Object
	{
	public:
		::System::UInt32 WaveIndex; // 0x10
		::System::UInt32 WaveCount; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEWAVEUPDATENOTIFY_CTOR_OFFSET))(this);
		}

	};
}
