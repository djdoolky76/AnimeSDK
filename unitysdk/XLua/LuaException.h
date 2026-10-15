#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define XLUA_LUAEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x14DC0FF0)

namespace XLua
{
	class LuaException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
