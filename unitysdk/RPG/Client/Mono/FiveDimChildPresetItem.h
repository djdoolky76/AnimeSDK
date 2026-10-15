#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONO_FIVEDIMCHILDPRESETITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD72CEB0)

namespace RPG::Client::Mono
{
	class FiveDimChildPresetItem : public ::System::Object
	{
	public:
		::System::String* PresetName; // 0x10
		::UnityEngine::Transform* PresetTransform; // 0x18
		::System::Boolean IsDynamicGridView; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 GridSizeX; // 0x24
		::System::UInt32 GridSizeY; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMCHILDPRESETITEM_CTOR_OFFSET))(this);
		}

	};
}
