#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_VOLUMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE459A70)

namespace RPG::Client
{
	class VolumeData : public ::System::Object
	{
	public:
		::UnityEngine::Bounds m_Bounds; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMEDATA_CTOR_OFFSET))(this);
		}

	};
}
