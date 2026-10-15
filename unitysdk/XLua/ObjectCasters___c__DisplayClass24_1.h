#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace XLua { class ObjectCast; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1_CTOR_OFFSET UNITYSDK_OFFSET(0x14DCC3F0)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1__GENCASTER_B__7_OFFSET UNITYSDK_OFFSET(0x14DCE130)

namespace XLua
{
	template <typename T>
	class ObjectCasters___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::XLua::ObjectCast* elementCaster; // 0x10
		::System::Type* elementType; // 0x18
		::System::Object* CS___8__locals1; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1_CTOR_OFFSET))(this);
		}

		::System::Object* _genCaster_b__7(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_1__GENCASTER_B__7_OFFSET))(this, a1, a2, a3);
		}

	};
}
