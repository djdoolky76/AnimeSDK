#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LifeCycleEventType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTARGUMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE904140)

namespace RPGTools::Timeline
{
	class LifeCycleEventArgument : public ::System::Object
	{
	public:
		::RPGTools::Timeline::LifeCycleEventType EventType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* IntValues; // 0x18
		::Il2CppArray<::System::Single>* FloatValues; // 0x20
		::Il2CppArray<::System::String*>* StringValues; // 0x28
		::Il2CppArray<::System::Boolean>* BoolValues; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTARGUMENT_CTOR_OFFSET))(this);
		}

	};
}
