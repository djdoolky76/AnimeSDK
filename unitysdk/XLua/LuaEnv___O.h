#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua::LuaDLL { class lua_CSFunction; }

namespace XLua
{
	class LuaEnv___O : public ::System::Object
	{
	public:
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__3___LoadFromCustomLoaders()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A60);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__1___Print()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A68);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__4___LoadFromResource()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A70);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__7___MetaFuncIndex()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A78);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__0___Panic()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A80);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__5___LoadFromStreamingAssetsPath()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A88);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__2___LoadBuiltinLib()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A90);
		}

		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__6___LoadCS()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x47A98);
		}

	};
}
