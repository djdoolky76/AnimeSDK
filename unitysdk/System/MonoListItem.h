#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class MonoListItem; }
namespace System { class Object; }

#define SYSTEM_MONOLISTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C27FC90)

namespace System
{
	class MonoListItem : public ::System::Object
	{
	public:
		::System::Object* data; // 0x10
		::System::MonoListItem* next; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOLISTITEM_CTOR_OFFSET))(this);
		}

	};
}
