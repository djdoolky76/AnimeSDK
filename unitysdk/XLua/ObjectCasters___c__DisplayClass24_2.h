#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace XLua { class ObjectCast; }

#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2_CTOR_OFFSET UNITYSDK_OFFSET(0x14DC0DB0)
#define XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2__GENCASTER_B__8_OFFSET UNITYSDK_OFFSET(0x14DC3360)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___c__DisplayClass24_2_TypeDefinitionIndex = 50240;

	template <typename T1, typename T2>
	class ObjectCasters___c__DisplayClass24_2 : public ::System::Object
	{
	public:
		::XLua::ObjectCast* valueCaster; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::XLua::ObjectCast* keyCaster; // 0x20
		::System::Type* keyType; // 0x28
		::System::Type* valueType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2_CTOR_OFFSET))(this);
		}

		::System::Object* _genCaster_b__8(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS___C__DISPLAYCLASS24_2__GENCASTER_B__8_OFFSET))(this, a1, a2, a3);
		}

	};
}
