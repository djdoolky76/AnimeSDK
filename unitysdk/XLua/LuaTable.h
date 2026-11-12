#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_LUATABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C84B60)
#define XLUA_LUATABLE_GETKEYS_OFFSET UNITYSDK_OFFSET(0x15C84EE0)
#define XLUA_LUATABLE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x15C84BD0)
#define XLUA_LUATABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15C84B70)
#define XLUA_LUATABLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x15C84C90)
#define XLUA_LUATABLE_PUSH_OFFSET UNITYSDK_OFFSET(0x15C80950)
#define XLUA_LUATABLE_SETMETATABLE_OFFSET UNITYSDK_OFFSET(0x15C84F60)
#define XLUA_LUATABLE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x15C84C40)
#define XLUA_LUATABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x15C84B80)
#define XLUA_LUATABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C852D0)

namespace XLua
{
	inline static constexpr unsigned int LuaTable_TypeDefinitionIndex = 51262;

	class LuaTable : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Item(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* get_Item_1(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GET_LENGTH_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetKeys()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_GETKEYS_OFFSET))(this);
		}

		::System::Void SetMetaTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_SETMETATABLE_OFFSET))(this, a1);
		}

		::System::Void push(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_PUSH_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE_TOSTRING_OFFSET))(this);
		}

	};
}
