#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define XLUA_OBJECTPOOL_SLOT_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)

namespace XLua
{
	struct alignas(8) ObjectPool_Slot
	{
		::System::Int32 next; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* obj; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_SLOT_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
