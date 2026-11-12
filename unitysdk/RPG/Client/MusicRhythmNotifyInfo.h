#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MUSICRHYTHMNOTIFYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE3A70A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmNotifyInfo_TypeDefinitionIndex = 61456;

	class MusicRhythmNotifyInfo : public ::System::Object
	{
	public:
		::System::Int32 Count; // 0x10
		::System::Single Duration; // 0x14
		::UnityEngine::Vector3 ScreenPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMNOTIFYINFO_CTOR_OFFSET))(this);
		}

	};
}
