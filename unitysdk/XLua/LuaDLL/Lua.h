#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaGCOptions.h"
#include "unitysdk/XLua/LuaTypes.h"
#include "unitysdk/System/Decimal.h"
namespace System { class Object; }
namespace System { class String; }
namespace XLua::LuaDLL { class ObjectRelationshipReport; }
namespace XLua::LuaDLL { class TableSizeReport; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_LUADLL_LUA_CCTOR_OFFSET UNITYSDK_OFFSET(0x12BA4DE0)
#define XLUA_LUADLL_LUA_CTOR_OFFSET UNITYSDK_OFFSET(0x12BA4DD0)
#define XLUA_LUADLL_LUA_GEN_CLS_INDEXER_OFFSET UNITYSDK_OFFSET(0x12BA2DD0)
#define XLUA_LUADLL_LUA_GEN_CLS_NEWINDEXER_OFFSET UNITYSDK_OFFSET(0x12BA2E50)
#define XLUA_LUADLL_LUA_GEN_OBJ_INDEXER_OFFSET UNITYSDK_OFFSET(0x12BA2CD0)
#define XLUA_LUADLL_LUA_GEN_OBJ_NEWINDEXER_OFFSET UNITYSDK_OFFSET(0x12BA2D50)
#define XLUA_LUADLL_LUA_GET_ERROR_FUNC_REF_OFFSET UNITYSDK_OFFSET(0x12BA2ED0)
#define XLUA_LUADLL_LUA_LOAD_ERROR_FUNC_OFFSET UNITYSDK_OFFSET(0x12BA2F50)
#define XLUA_LUADLL_LUA_LUAL_ERROR_OFFSET UNITYSDK_OFFSET(0x12B9F790)
#define XLUA_LUADLL_LUA_LUAL_GETMETATABLE_OFFSET UNITYSDK_OFFSET(0x12BA1FA0)
#define XLUA_LUADLL_LUA_LUAL_LOADBUFFER_OFFSET UNITYSDK_OFFSET(0x12BA2110)
#define XLUA_LUADLL_LUA_LUAL_NEWMETATABLE_OFFSET UNITYSDK_OFFSET(0x12BA1DE0)
#define XLUA_LUADLL_LUA_LUAL_NEWSTATE_OFFSET UNITYSDK_OFFSET(0x12B9F960)
#define XLUA_LUADLL_LUA_LUAL_OPENLIBS_OFFSET UNITYSDK_OFFSET(0x12B9FAE0)
#define XLUA_LUADLL_LUA_LUAL_REF_1_OFFSET UNITYSDK_OFFSET(0x12BA04A0)
#define XLUA_LUADLL_LUA_LUAL_REF_OFFSET UNITYSDK_OFFSET(0x12BA0410)
#define XLUA_LUADLL_LUA_LUAL_TRACEBACK_OFFSET UNITYSDK_OFFSET(0x12B9F0C0)
#define XLUA_LUADLL_LUA_LUAL_UNREF_OFFSET UNITYSDK_OFFSET(0x12BA0730)
#define XLUA_LUADLL_LUA_LUAL_WHERE_OFFSET UNITYSDK_OFFSET(0x12BA2B20)
#define XLUA_LUADLL_LUA_LUAOPEN_I64LIB_OFFSET UNITYSDK_OFFSET(0x12BA2FE0)
#define XLUA_LUADLL_LUA_LUAOPEN_PROTOLUA_OFFSET UNITYSDK_OFFSET(0x12B9F170)
#define XLUA_LUADLL_LUA_LUAOPEN_SOCKET_CORE_OFFSET UNITYSDK_OFFSET(0x12BA3060)
#define XLUA_LUADLL_LUA_LUAOPEN_XLUA_OFFSET UNITYSDK_OFFSET(0x12B9FA60)
#define XLUA_LUADLL_LUA_LUA_ATPANIC_OFFSET UNITYSDK_OFFSET(0x12BA10E0)
#define XLUA_LUADLL_LUA_LUA_BEYONDINT_OFFSET UNITYSDK_OFFSET(0x12BA2A10)
#define XLUA_LUADLL_LUA_LUA_CHECKSTACK_OFFSET UNITYSDK_OFFSET(0x12BA2490)
#define XLUA_LUADLL_LUA_LUA_CLOSE_OFFSET UNITYSDK_OFFSET(0x12B9F9E0)
#define XLUA_LUADLL_LUA_LUA_CREATETABLE_OFFSET UNITYSDK_OFFSET(0x12B9FBF0)
#define XLUA_LUADLL_LUA_LUA_ERROR_OFFSET UNITYSDK_OFFSET(0x12BA2390)
#define XLUA_LUADLL_LUA_LUA_GC_OFFSET UNITYSDK_OFFSET(0x12B9F290)
#define XLUA_LUADLL_LUA_LUA_GETREF_OFFSET UNITYSDK_OFFSET(0x12B9EA60)
#define XLUA_LUADLL_LUA_LUA_GETTOP_OFFSET UNITYSDK_OFFSET(0x12B9E9E0)
#define XLUA_LUADLL_LUA_LUA_GETUPVALUE_OFFSET UNITYSDK_OFFSET(0x12B9F320)
#define XLUA_LUADLL_LUA_LUA_GETUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12BA2800)
#define XLUA_LUADLL_LUA_LUA_INSERT_OFFSET UNITYSDK_OFFSET(0x12B9FEC0)
#define XLUA_LUADLL_LUA_LUA_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x12BA0380)
#define XLUA_LUADLL_LUA_LUA_ISFUNCTION_OFFSET UNITYSDK_OFFSET(0x12B9F4C0)
#define XLUA_LUADLL_LUA_LUA_ISINT64_OFFSET UNITYSDK_OFFSET(0x12BA34B0)
#define XLUA_LUADLL_LUA_LUA_ISINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12BA30F0)
#define XLUA_LUADLL_LUA_LUA_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x12BA0900)
#define XLUA_LUADLL_LUA_LUA_ISLIGHTUSERDATA_OFFSET UNITYSDK_OFFSET(0x12B9F5E0)
#define XLUA_LUADLL_LUA_LUA_ISNIL_OFFSET UNITYSDK_OFFSET(0x12BA0260)
#define XLUA_LUADLL_LUA_LUA_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x12BA02F0)
#define XLUA_LUADLL_LUA_LUA_ISSTRING_OFFSET UNITYSDK_OFFSET(0x12BA0870)
#define XLUA_LUADLL_LUA_LUA_ISTABLE_OFFSET UNITYSDK_OFFSET(0x12B9F670)
#define XLUA_LUADLL_LUA_LUA_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x12B9F700)
#define XLUA_LUADLL_LUA_LUA_ISUINT64_OFFSET UNITYSDK_OFFSET(0x12BA3540)
#define XLUA_LUADLL_LUA_LUA_ISUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12BA3290)
#define XLUA_LUADLL_LUA_LUA_NEWTABLE_OFFSET UNITYSDK_OFFSET(0x12B9FC80)
#define XLUA_LUADLL_LUA_LUA_NEWUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12BA2630)
#define XLUA_LUADLL_LUA_LUA_NEXT_OFFSET UNITYSDK_OFFSET(0x12BA2520)
#define XLUA_LUADLL_LUA_LUA_PCALL_OFFSET UNITYSDK_OFFSET(0x12BA0C20)
#define XLUA_LUADLL_LUA_LUA_POP_OFFSET UNITYSDK_OFFSET(0x12B9EF30)
#define XLUA_LUADLL_LUA_LUA_PUSHBOOLEAN_OFFSET UNITYSDK_OFFSET(0x12BA1200)
#define XLUA_LUADLL_LUA_LUA_PUSHFIXSTRING_OFFSET UNITYSDK_OFFSET(0x12BA1B90)
#define XLUA_LUADLL_LUA_LUA_PUSHINT64_OFFSET UNITYSDK_OFFSET(0x12BA33B0)
#define XLUA_LUADLL_LUA_LUA_PUSHINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12BA3070)
#define XLUA_LUADLL_LUA_LUA_PUSHLIGHTUSERDATA_OFFSET UNITYSDK_OFFSET(0x12BA25B0)
#define XLUA_LUADLL_LUA_LUA_PUSHNIL_OFFSET UNITYSDK_OFFSET(0x12BA0990)
#define XLUA_LUADLL_LUA_LUA_PUSHNUMBER_OFFSET UNITYSDK_OFFSET(0x12BA1170)
#define XLUA_LUADLL_LUA_LUA_PUSHSTDCALLCFUNCTION_OFFSET UNITYSDK_OFFSET(0x12BA0A10)
#define XLUA_LUADLL_LUA_LUA_PUSHSTRING_1_OFFSET UNITYSDK_OFFSET(0x12BA1A90)
#define XLUA_LUADLL_LUA_LUA_PUSHSTRING_OFFSET UNITYSDK_OFFSET(0x12BA1380)
#define XLUA_LUADLL_LUA_LUA_PUSHTHREAD_OFFSET UNITYSDK_OFFSET(0x12B9F440)
#define XLUA_LUADLL_LUA_LUA_PUSHUINT64_OFFSET UNITYSDK_OFFSET(0x12BA3430)
#define XLUA_LUADLL_LUA_LUA_PUSHUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12BA3210)
#define XLUA_LUADLL_LUA_LUA_PUSHVALUE_OFFSET UNITYSDK_OFFSET(0x12BA0160)
#define XLUA_LUADLL_LUA_LUA_RAWEQUAL_OFFSET UNITYSDK_OFFSET(0x12B9EB10)
#define XLUA_LUADLL_LUA_LUA_RAWGET_OFFSET UNITYSDK_OFFSET(0x12B9FFC0)
#define XLUA_LUADLL_LUA_LUA_RAWSET_OFFSET UNITYSDK_OFFSET(0x12BA0050)
#define XLUA_LUADLL_LUA_LUA_REMOVE_OFFSET UNITYSDK_OFFSET(0x12B9FF40)
#define XLUA_LUADLL_LUA_LUA_REPLACE_OFFSET UNITYSDK_OFFSET(0x12BA01E0)
#define XLUA_LUADLL_LUA_LUA_SETFENV_OFFSET UNITYSDK_OFFSET(0x12B9F8D0)
#define XLUA_LUADLL_LUA_LUA_SETMETATABLE_OFFSET UNITYSDK_OFFSET(0x12BA00D0)
#define XLUA_LUADLL_LUA_LUA_SETTOP_OFFSET UNITYSDK_OFFSET(0x12B9EBA0)
#define XLUA_LUADLL_LUA_LUA_SETUPVALUE_OFFSET UNITYSDK_OFFSET(0x12B9F3B0)
#define XLUA_LUADLL_LUA_LUA_SETUSERDATADTOR_OFFSET UNITYSDK_OFFSET(0x12BA2770)
#define XLUA_LUADLL_LUA_LUA_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x12BA0E60)
#define XLUA_LUADLL_LUA_LUA_TOBYTES_OFFSET UNITYSDK_OFFSET(0x12BA1C90)
#define XLUA_LUADLL_LUA_LUA_TOINT64_OFFSET UNITYSDK_OFFSET(0x12BA35D0)
#define XLUA_LUADLL_LUA_LUA_TOINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12BA3180)
#define XLUA_LUADLL_LUA_LUA_TOLSTRING_OFFSET UNITYSDK_OFFSET(0x12BA0EF0)
#define XLUA_LUADLL_LUA_LUA_TONUMBER_OFFSET UNITYSDK_OFFSET(0x12BA0CC0)
#define XLUA_LUADLL_LUA_LUA_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x12B9EEA0)
#define XLUA_LUADLL_LUA_LUA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12BA0F80)
#define XLUA_LUADLL_LUA_LUA_TOTHREAD_OFFSET UNITYSDK_OFFSET(0x12B9F180)
#define XLUA_LUADLL_LUA_LUA_TOUINT64_OFFSET UNITYSDK_OFFSET(0x12BA3660)
#define XLUA_LUADLL_LUA_LUA_TOUINT64_USERDATA_OFFSET UNITYSDK_OFFSET(0x12BA3320)
#define XLUA_LUADLL_LUA_LUA_TOUSERDATA_OFFSET UNITYSDK_OFFSET(0x12BA3EF0)
#define XLUA_LUADLL_LUA_LUA_TYPE_OFFSET UNITYSDK_OFFSET(0x12B9F550)
#define XLUA_LUADLL_LUA_LUA_UNREF_OFFSET UNITYSDK_OFFSET(0x12BA07C0)
#define XLUA_LUADLL_LUA_PCALL_PREPARE_OFFSET UNITYSDK_OFFSET(0x12BA06A0)
#define XLUA_LUADLL_LUA_XLUAL_LOADBUFFER_OFFSET UNITYSDK_OFFSET(0x12BA2050)
#define XLUA_LUADLL_LUA_XLUAL_SET_CODEGEN_OFFSET UNITYSDK_OFFSET(0x12BA2890)
#define XLUA_LUADLL_LUA_XLUAL_SET_DEBUG_LEVEL_OFFSET UNITYSDK_OFFSET(0x12BA2910)
#define XLUA_LUADLL_LUA_XLUAL_SET_OPTIMIZATION_LEVEL_OFFSET UNITYSDK_OFFSET(0x12BA2990)
#define XLUA_LUADLL_LUA_XLUA_CSHARP_ERROR_OFFSET UNITYSDK_OFFSET(0x12BA2410)
#define XLUA_LUADLL_LUA_XLUA_CSHARP_STR_ERROR_OFFSET UNITYSDK_OFFSET(0x12B9F830)
#define XLUA_LUADLL_LUA_XLUA_GETGLOBAL_OFFSET UNITYSDK_OFFSET(0x12B9FD00)
#define XLUA_LUADLL_LUA_XLUA_GETLOADERS_OFFSET UNITYSDK_OFFSET(0x12B9FE40)
#define XLUA_LUADLL_LUA_XLUA_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x12BA3F80)
#define XLUA_LUADLL_LUA_XLUA_GET_LIB_VERSION_OFFSET UNITYSDK_OFFSET(0x12B9F210)
#define XLUA_LUADLL_LUA_XLUA_GET_REGISTRY_INDEX_OFFSET UNITYSDK_OFFSET(0x12BA4010)
#define XLUA_LUADLL_LUA_XLUA_GLOBAL_POINTER_OFFSET UNITYSDK_OFFSET(0x12B9F0B0)
#define XLUA_LUADLL_LUA_XLUA_GL_OFFSET UNITYSDK_OFFSET(0x12BA4D50)
#define XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_1_OFFSET UNITYSDK_OFFSET(0x12BA4CA0)
#define XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_OFFSET UNITYSDK_OFFSET(0x12BA4BE0)
#define XLUA_LUADLL_LUA_XLUA_OBJLEN_OFFSET UNITYSDK_OFFSET(0x12B9FB60)
#define XLUA_LUADLL_LUA_XLUA_PACK_DECIMAL_OFFSET UNITYSDK_OFFSET(0x12BA4A90)
#define XLUA_LUADLL_LUA_XLUA_PACK_DOUBLE_OFFSET UNITYSDK_OFFSET(0x12BA3CA0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT2_OFFSET UNITYSDK_OFFSET(0x12BA41F0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT3_OFFSET UNITYSDK_OFFSET(0x12BA4340)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT4_OFFSET UNITYSDK_OFFSET(0x12BA44C0)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT5_OFFSET UNITYSDK_OFFSET(0x12BA4680)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT6_OFFSET UNITYSDK_OFFSET(0x12BA4870)
#define XLUA_LUADLL_LUA_XLUA_PACK_FLOAT_OFFSET UNITYSDK_OFFSET(0x12BA3B70)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT16_T_OFFSET UNITYSDK_OFFSET(0x12BA3810)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT32_T_OFFSET UNITYSDK_OFFSET(0x12BA3930)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT64_T_OFFSET UNITYSDK_OFFSET(0x12BA3A50)
#define XLUA_LUADLL_LUA_XLUA_PACK_INT8_T_OFFSET UNITYSDK_OFFSET(0x12BA36F0)
#define XLUA_LUADLL_LUA_XLUA_PGETTABLE_BYPATH_OFFSET UNITYSDK_OFFSET(0x12BA4090)
#define XLUA_LUADLL_LUA_XLUA_PGETTABLE_OFFSET UNITYSDK_OFFSET(0x12BA1E80)
#define XLUA_LUADLL_LUA_XLUA_PSETTABLE_BYPATH_OFFSET UNITYSDK_OFFSET(0x12BA4140)
#define XLUA_LUADLL_LUA_XLUA_PSETTABLE_OFFSET UNITYSDK_OFFSET(0x12BA1F10)
#define XLUA_LUADLL_LUA_XLUA_PUSHASCIISTRING_OFFSET UNITYSDK_OFFSET(0x12BA1800)
#define XLUA_LUADLL_LUA_XLUA_PUSHCSOBJ_OFFSET UNITYSDK_OFFSET(0x12BA2C30)
#define XLUA_LUADLL_LUA_XLUA_PUSHCSTABLE_OFFSET UNITYSDK_OFFSET(0x12BA3E60)
#define XLUA_LUADLL_LUA_XLUA_PUSHINTEGER_OFFSET UNITYSDK_OFFSET(0x12BA1280)
#define XLUA_LUADLL_LUA_XLUA_PUSHLSTRING_OFFSET UNITYSDK_OFFSET(0x12BA1770)
#define XLUA_LUADLL_LUA_XLUA_PUSHSTRUCT_OFFSET UNITYSDK_OFFSET(0x12BA3DD0)
#define XLUA_LUADLL_LUA_XLUA_PUSHUINT_OFFSET UNITYSDK_OFFSET(0x12BA1300)
#define XLUA_LUADLL_LUA_XLUA_PUSH_CSHARP_FUNCTION_OFFSET UNITYSDK_OFFSET(0x12BA0B10)
#define XLUA_LUADLL_LUA_XLUA_PUSH_TAG_CSOBJ_OFFSET UNITYSDK_OFFSET(0x12BA26C0)
#define XLUA_LUADLL_LUA_XLUA_RAWGETI_OFFSET UNITYSDK_OFFSET(0x12BA0580)
#define XLUA_LUADLL_LUA_XLUA_RAWSETI_OFFSET UNITYSDK_OFFSET(0x12BA0610)
#define XLUA_LUADLL_LUA_XLUA_REGISTRY_POINTER_OFFSET UNITYSDK_OFFSET(0x12B9F0A0)
#define XLUA_LUADLL_LUA_XLUA_REPORT_OBJECT_RELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x12B9F090)
#define XLUA_LUADLL_LUA_XLUA_REPORT_TABLE_SIZE_OFFSET UNITYSDK_OFFSET(0x12B9F080)
#define XLUA_LUADLL_LUA_XLUA_SETGLOBAL_OFFSET UNITYSDK_OFFSET(0x12B9FDA0)
#define XLUA_LUADLL_LUA_XLUA_TAG_OFFSET UNITYSDK_OFFSET(0x12BA2AA0)
#define XLUA_LUADLL_LUA_XLUA_TOCSOBJ_FAST_OFFSET UNITYSDK_OFFSET(0x12BA2300)
#define XLUA_LUADLL_LUA_XLUA_TOCSOBJ_SAFE_OFFSET UNITYSDK_OFFSET(0x12BA2270)
#define XLUA_LUADLL_LUA_XLUA_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x12BA0D40)
#define XLUA_LUADLL_LUA_XLUA_TOUINT_OFFSET UNITYSDK_OFFSET(0x12BA0DD0)
#define XLUA_LUADLL_LUA_XLUA_TRYGET_CACHEDUD_OFFSET UNITYSDK_OFFSET(0x12BA2BA0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_DECIMAL_OFFSET UNITYSDK_OFFSET(0x12BA4B20)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_DOUBLE_OFFSET UNITYSDK_OFFSET(0x12BA3D40)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT2_OFFSET UNITYSDK_OFFSET(0x12BA42A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT3_OFFSET UNITYSDK_OFFSET(0x12BA4410)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT4_OFFSET UNITYSDK_OFFSET(0x12BA45C0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT5_OFFSET UNITYSDK_OFFSET(0x12BA47A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT6_OFFSET UNITYSDK_OFFSET(0x12BA49B0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT_OFFSET UNITYSDK_OFFSET(0x12BA3C10)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT16_T_OFFSET UNITYSDK_OFFSET(0x12BA38A0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT32_T_OFFSET UNITYSDK_OFFSET(0x12BA39C0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT64_T_OFFSET UNITYSDK_OFFSET(0x12BA3AE0)
#define XLUA_LUADLL_LUA_XLUA_UNPACK_INT8_T_OFFSET UNITYSDK_OFFSET(0x12BA3780)
#define XLUA_LUADLL_LUA_XLUA_UPVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x12BA0BA0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int Lua_TypeDefinitionIndex = 52792;

	class Lua : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__lock()
		{
			return (::System::Object**)UnitySDK::FromName("XLua.LuaDLL", "Lua")->GetStaticField(0x53810);
		}

		// static const ::System::String* LUADLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CCTOR_OFFSET))();
		}

		static ::System::Void xlua_report_table_size(::System::IntPtr a1, ::XLua::LuaDLL::TableSizeReport* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::TableSizeReport*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REPORT_TABLE_SIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_report_object_relationship(::System::IntPtr a1, ::XLua::LuaDLL::ObjectRelationshipReport* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::ObjectRelationshipReport*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REPORT_OBJECT_RELATIONSHIP_OFFSET))(a1, a2);
		}

		static ::System::IntPtr xlua_registry_pointer(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_REGISTRY_POINTER_OFFSET))(a1);
		}

		static ::System::IntPtr xlua_global_pointer(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GLOBAL_POINTER_OFFSET))(a1);
		}

		static ::System::Void luaL_traceback(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_TRACEBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 luaopen_protolua(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_PROTOLUA_OFFSET))(a1);
		}

		static ::System::IntPtr lua_tothread(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOTHREAD_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_get_lib_version()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GET_LIB_VERSION_OFFSET))();
		}

		static ::System::Int32 lua_gc(::System::IntPtr a1, ::XLua::LuaGCOptions a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::XLua::LuaGCOptions, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GC_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_getupvalue(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETUPVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_setupvalue(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETUPVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 lua_pushthread(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHTHREAD_OFFSET))(a1);
		}

		static ::System::Boolean lua_isfunction(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISFUNCTION_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_islightuserdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISLIGHTUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_istable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISTABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isthread(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISTHREAD_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_error(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_setfenv(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETFENV_OFFSET))(a1, a2);
		}

		static ::System::IntPtr luaL_newstate()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_NEWSTATE_OFFSET))();
		}

		static ::System::Void lua_close(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CLOSE_OFFSET))(a1);
		}

		static ::System::Void luaopen_xlua(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_XLUA_OFFSET))(a1);
		}

		static ::System::Void luaL_openlibs(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_OPENLIBS_OFFSET))(a1);
		}

		static ::System::UInt32 xlua_objlen(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_OBJLEN_OFFSET))(a1, a2);
		}

		static ::System::Void lua_createtable(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CREATETABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_newtable(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEWTABLE_OFFSET))(a1);
		}

		static ::System::Int32 xlua_getglobal(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETGLOBAL_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_setglobal(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_SETGLOBAL_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_getloaders(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETLOADERS_OFFSET))(a1);
		}

		static ::System::Void lua_settop(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETTOP_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pop(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_POP_OFFSET))(a1, a2);
		}

		static ::System::Void lua_insert(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_INSERT_OFFSET))(a1, a2);
		}

		static ::System::Void lua_remove(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_REMOVE_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_rawget(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWGET_OFFSET))(a1, a2);
		}

		static ::System::Void lua_rawset(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWSET_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_setmetatable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETMETATABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_rawequal(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_RAWEQUAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_pushvalue(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void lua_replace(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_REPLACE_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_gettop(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETTOP_OFFSET))(a1);
		}

		static ::XLua::LuaTypes lua_type(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::XLua::LuaTypes(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isnil(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISNIL_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isnumber(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isboolean(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_ref(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_REF_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_ref_1(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_REF_1_OFFSET))(a1);
		}

		static ::System::Void xlua_rawgeti(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_RAWGETI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_rawseti(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_RAWSETI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_getref(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETREF_OFFSET))(a1, a2);
		}

		static ::System::Int32 pcall_prepare(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_PCALL_PREPARE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void luaL_unref(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_UNREF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void lua_unref(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_UNREF_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isstring(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isinteger(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushnil(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHNIL_OFFSET))(a1);
		}

		static ::System::Void lua_pushstdcallcfunction(::System::IntPtr a1, ::XLua::LuaDLL::lua_CSFunction* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTDCALLCFUNCTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_upvalueindex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UPVALUEINDEX_OFFSET))(a1);
		}

		static ::System::Int32 lua_pcall(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PCALL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Double lua_tonumber(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TONUMBER_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_tointeger(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOINTEGER_OFFSET))(a1, a2);
		}

		static ::System::UInt32 xlua_touint(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOUINT_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_toboolean(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_topointer(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOPOINTER_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_tolstring(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOLSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* lua_tostring(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOSTRING_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_atpanic(::System::IntPtr a1, ::XLua::LuaDLL::lua_CSFunction* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ATPANIC_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushnumber(::System::IntPtr a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushboolean(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_pushinteger(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_pushuint(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHUINT_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushstring(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTRING_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_pushlstring(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHLSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_pushasciistring(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHASCIISTRING_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushstring_1(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHSTRING_1_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushfixstring(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHFIXSTRING_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* lua_tobytes(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOBYTES_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaL_newmetatable(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_NEWMETATABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_pgettable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PGETTABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_psettable(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PSETTABLE_OFFSET))(a1, a2);
		}

		static ::System::Void luaL_getmetatable(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_GETMETATABLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xluaL_loadbuffer(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_LOADBUFFER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 luaL_loadbuffer(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_LOADBUFFER_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_tocsobj_safe(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOCSOBJ_SAFE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_tocsobj_fast(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TOCSOBJ_FAST_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_error(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ERROR_OFFSET))(a1);
		}

		static ::System::Boolean lua_checkstack(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_CHECKSTACK_OFFSET))(a1, a2);
		}

		static ::System::Int32 lua_next(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEXT_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushlightuserdata(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHLIGHTUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::IntPtr lua_newuserdatadtor(::System::IntPtr a1, ::System::UInt64 a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_NEWUSERDATADTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_push_tag_csobj(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSH_TAG_CSOBJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 lua_setuserdatadtor(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_SETUSERDATADTOR_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_getuserdatadtor(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_GETUSERDATADTOR_OFFSET))(a1, a2);
		}

		static ::System::Void xluaL_set_codegen(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_CODEGEN_OFFSET))(a1);
		}

		static ::System::Void xluaL_set_debug_level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_DEBUG_LEVEL_OFFSET))(a1);
		}

		static ::System::Void xluaL_set_optimization_level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUAL_SET_OPTIMIZATION_LEVEL_OFFSET))(a1);
		}

		static ::System::Int32 lua_beyondint(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_BEYONDINT_OFFSET))(a1, a2);
		}

		static ::System::IntPtr xlua_tag()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TAG_OFFSET))();
		}

		static ::System::Void luaL_where(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAL_WHERE_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_tryget_cachedud(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_TRYGET_CACHEDUD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_pushcsobj(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHCSOBJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 gen_obj_indexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_OBJ_INDEXER_OFFSET))(a1);
		}

		static ::System::Int32 gen_obj_newindexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_OBJ_NEWINDEXER_OFFSET))(a1);
		}

		static ::System::Int32 gen_cls_indexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_CLS_INDEXER_OFFSET))(a1);
		}

		static ::System::Int32 gen_cls_newindexer(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GEN_CLS_NEWINDEXER_OFFSET))(a1);
		}

		static ::System::Int32 get_error_func_ref(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_GET_ERROR_FUNC_REF_OFFSET))(a1);
		}

		static ::System::Int32 load_error_func(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LOAD_ERROR_FUNC_OFFSET))(a1, a2);
		}

		static ::System::Int32 luaopen_i64lib(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_I64LIB_OFFSET))(a1);
		}

		static ::System::Int32 luaopen_socket_core(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUAOPEN_SOCKET_CORE_OFFSET))(a1);
		}

		static ::System::Void lua_pushint64_userdata(::System::IntPtr a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Int64 lua_toint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushuint64_userdata(::System::IntPtr a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHUINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isuint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISUINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Int64 lua_touint64_userdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUINT64_USERDATA_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushint64(::System::IntPtr a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHINT64_OFFSET))(a1, a2);
		}

		static ::System::Void lua_pushuint64(::System::IntPtr a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_PUSHUINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean lua_isuint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_ISUINT64_OFFSET))(a1, a2);
		}

		static ::System::Int64 lua_toint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOINT64_OFFSET))(a1, a2);
		}

		static ::System::UInt64 lua_touint64(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUINT64_OFFSET))(a1, a2);
		}

		static ::System::Void xlua_push_csharp_function(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSH_CSHARP_FUNCTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_csharp_str_error(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_CSHARP_STR_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_csharp_error(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_CSHARP_ERROR_OFFSET))(a1);
		}

		static ::System::Boolean xlua_pack_int8_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT8_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int8_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT8_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_int16_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT16_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int16_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT16_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_int32_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT32_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int32_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT32_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_int64_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_INT64_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_int64_t(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_INT64_T_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_float(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_float(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_double(::System::IntPtr a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_DOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_double(::System::IntPtr a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_DOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr xlua_pushstruct(::System::IntPtr a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHSTRUCT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void xlua_pushcstable(::System::IntPtr a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PUSHCSTABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr lua_touserdata(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_LUA_TOUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_gettypeid(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GETTYPEID_OFFSET))(a1, a2);
		}

		static ::System::Int32 xlua_get_registry_index()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GET_REGISTRY_INDEX_OFFSET))();
		}

		static ::System::Int32 xlua_pgettable_bypath(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PGETTABLE_BYPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 xlua_psettable_bypath(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PSETTABLE_BYPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_pack_float2(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean xlua_unpack_float2(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean xlua_pack_float3(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean xlua_unpack_float3(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean xlua_pack_float4(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean xlua_unpack_float4(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean xlua_pack_float5(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean xlua_unpack_float5(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT5_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean xlua_pack_float6(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_FLOAT6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean xlua_unpack_float6(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_FLOAT6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean xlua_pack_decimal(::System::IntPtr a1, ::System::Int32 a2, ::System::Decimal a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_PACK_DECIMAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_unpack_decimal(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte a3, ::System::Byte a4, ::System::Int32 a5, ::System::UInt64 a6)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_UNPACK_DECIMAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean xlua_is_eq_str(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean xlua_is_eq_str_1(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_IS_EQ_STR_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr xlua_gl(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_XLUA_GL_OFFSET))(a1);
		}

	};
}
