#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define STAGEBUDGETTOOL_DOOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE98A4B0)

namespace StageBudgetTool
{
	class Door : public ::System::Object
	{
	public:
		::System::String* ConnectRoomAlias; // 0x10
		::UnityEngine::Vector3 Position; // 0x18
		::UnityEngine::Vector3 Scale; // 0x24
		::UnityEngine::Quaternion Rotation; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_DOOR_CTOR_OFFSET))(this);
		}

	};
}
