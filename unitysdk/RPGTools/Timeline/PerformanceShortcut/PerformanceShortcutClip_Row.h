#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_ROW_CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF880)

namespace RPGTools::Timeline::PerformanceShortcut
{
	inline static constexpr unsigned int PerformanceShortcutClip_Row_TypeDefinitionIndex = 49691;

	class PerformanceShortcutClip_Row : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* UniqueName; // 0x18
		::System::String* Motion; // 0x20
		::System::String* Emotion; // 0x28
		::System::String* LookAt; // 0x30
		::System::String* Steer; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCESHORTCUT_PERFORMANCESHORTCUTCLIP_ROW_CTOR_OFFSET))(this);
		}

	};
}
