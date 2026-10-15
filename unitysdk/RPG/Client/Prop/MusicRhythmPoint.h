#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPointType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_MUSICRHYTHMPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0xDD2DBA0)

namespace RPG::Client::Prop
{
	class MusicRhythmPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::MusicRhythmPointType PointType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MUSICRHYTHMPOINT_CTOR_OFFSET))(this);
		}

	};
}
