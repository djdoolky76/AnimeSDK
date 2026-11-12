#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTCASTERS_ADDCASTER_OFFSET UNITYSDK_OFFSET(0x15C8C250)
#define XLUA_OBJECTCASTERS_BYTECASTER_OFFSET UNITYSDK_OFFSET(0x15C8AA20)
#define XLUA_OBJECTCASTERS_CHARCASTER_OFFSET UNITYSDK_OFFSET(0x15C8A8E0)
#define XLUA_OBJECTCASTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x15C89800)
#define XLUA_OBJECTCASTERS_DECIMALCASTER_OFFSET UNITYSDK_OFFSET(0x15C8AFC0)
#define XLUA_OBJECTCASTERS_FLOATCASTER_OFFSET UNITYSDK_OFFSET(0x15C8AF20)
#define XLUA_OBJECTCASTERS_GENCASTER_OFFSET UNITYSDK_OFFSET(0x15C8C2C0)
#define XLUA_OBJECTCASTERS_GENNULLABLECASTER_OFFSET UNITYSDK_OFFSET(0x15C8CCC0)
#define XLUA_OBJECTCASTERS_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x15C8B010)
#define XLUA_OBJECTCASTERS_GETBYTES_OFFSET UNITYSDK_OFFSET(0x15C8B0C0)
#define XLUA_OBJECTCASTERS_GETCASTER_OFFSET UNITYSDK_OFFSET(0x15C8CA40)
#define XLUA_OBJECTCASTERS_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x15C8AE80)
#define XLUA_OBJECTCASTERS_GETINTPTR_OFFSET UNITYSDK_OFFSET(0x15C8B220)
#define XLUA_OBJECTCASTERS_GETLUAFUNCTION_OFFSET UNITYSDK_OFFSET(0x15C8BDC0)
#define XLUA_OBJECTCASTERS_GETLUATABLE_OFFSET UNITYSDK_OFFSET(0x15C8BA90)
#define XLUA_OBJECTCASTERS_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x15C8B2C0)
#define XLUA_OBJECTCASTERS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x15C8B0B0)
#define XLUA_OBJECTCASTERS_GETTEXTID_OFFSET UNITYSDK_OFFSET(0x15C8C0F0)
#define XLUA_OBJECTCASTERS_INTCASTER_OFFSET UNITYSDK_OFFSET(0x15C8AC00)
#define XLUA_OBJECTCASTERS_LONGCASTER_OFFSET UNITYSDK_OFFSET(0x15C8AD40)
#define XLUA_OBJECTCASTERS_SBYTECASTER_OFFSET UNITYSDK_OFFSET(0x15C8A980)
#define XLUA_OBJECTCASTERS_SHORTCASTER_OFFSET UNITYSDK_OFFSET(0x15C8AAC0)
#define XLUA_OBJECTCASTERS_UINTCASTER_OFFSET UNITYSDK_OFFSET(0x15C8ACA0)
#define XLUA_OBJECTCASTERS_ULONGCASTER_OFFSET UNITYSDK_OFFSET(0x15C8ADE0)
#define XLUA_OBJECTCASTERS_USHORTCASTER_OFFSET UNITYSDK_OFFSET(0x15C8AB60)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters_TypeDefinitionIndex = 51287;

	class ObjectCasters : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator* translator; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::ObjectCast*>* castersMap; // 0x18
		::System::Void _ctor(::XLua::ObjectTranslator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_CTOR_OFFSET))(this, a1);
		}

		static ::System::Object* charCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_CHARCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* sbyteCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_SBYTECASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* byteCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_BYTECASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* shortCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_SHORTCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* ushortCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_USHORTCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* intCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_INTCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* uintCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_UINTCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* longCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_LONGCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* ulongCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_ULONGCASTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* getDouble(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETDOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* floatCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_FLOATCASTER_OFFSET))(a1, a2, a3);
		}

		::System::Object* decimalCaster(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_DECIMALCASTER_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Object* getBoolean(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETBOOLEAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* getString(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETSTRING_OFFSET))(a1, a2, a3);
		}

		::System::Object* getBytes(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETBYTES_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* getIntptr(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETINTPTR_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* getObject(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETOBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* getLuaTable(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETLUATABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* getLuaFunction(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETLUAFUNCTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* getTextID(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETTEXTID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddCaster(::System::Type* a1, ::XLua::ObjectCast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::XLua::ObjectCast*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_ADDCASTER_OFFSET))(this, a1, a2);
		}

		::XLua::ObjectCast* genCaster(::System::Type* a1)
		{
			return ((::XLua::ObjectCast*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GENCASTER_OFFSET))(this, a1);
		}

		::XLua::ObjectCast* genNullableCaster(::XLua::ObjectCast* a1)
		{
			return ((::XLua::ObjectCast*(*)(::PVOID, ::XLua::ObjectCast*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GENNULLABLECASTER_OFFSET))(this, a1);
		}

		::XLua::ObjectCast* GetCaster(::System::Type* a1)
		{
			return ((::XLua::ObjectCast*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETCASTER_OFFSET))(this, a1);
		}

	};
}
