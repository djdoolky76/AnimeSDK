#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua { class ObjectCast; }

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters___O_TypeDefinitionIndex = 51288;

	class ObjectCasters___O : public ::System::Object
	{
	public:
		static ::XLua::ObjectCast** StaticGet__1___sbyteCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542A0);
		}

		static ::XLua::ObjectCast** StaticGet__0___charCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542A8);
		}

		static ::XLua::ObjectCast** StaticGet__3___shortCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542B0);
		}

		static ::XLua::ObjectCast** StaticGet__9___getDouble()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542B8);
		}

		static ::XLua::ObjectCast** StaticGet__8___ulongCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542C0);
		}

		static ::XLua::ObjectCast** StaticGet__10___floatCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542C8);
		}

		static ::XLua::ObjectCast** StaticGet__11___getBoolean()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542D0);
		}

		static ::XLua::ObjectCast** StaticGet__5___intCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542D8);
		}

		static ::XLua::ObjectCast** StaticGet__7___longCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542E0);
		}

		static ::XLua::ObjectCast** StaticGet__12___getString()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542E8);
		}

		static ::XLua::ObjectCast** StaticGet__2___byteCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542F0);
		}

		static ::XLua::ObjectCast** StaticGet__4___ushortCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x542F8);
		}

		static ::XLua::ObjectCast** StaticGet__6___uintCaster()
		{
			return (::XLua::ObjectCast**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x54300);
		}

	};
}
