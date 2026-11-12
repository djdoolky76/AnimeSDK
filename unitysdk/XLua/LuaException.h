#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define XLUA_LUAEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x15C81630)

namespace XLua
{
	inline static constexpr unsigned int LuaException_TypeDefinitionIndex = 51260;

	class LuaException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
