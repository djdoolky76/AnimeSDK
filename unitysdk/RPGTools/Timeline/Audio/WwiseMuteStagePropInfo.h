#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTESTAGEPROPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xF38DAA0)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseMuteStagePropInfo_TypeDefinitionIndex = 49900;

	class WwiseMuteStagePropInfo : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTESTAGEPROPINFO_CTOR_OFFSET))(this);
		}

	};
}
