#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUAHOOKMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x14DC2120)

namespace XLua
{
	inline static constexpr unsigned int LuaHookMask_TypeDefinitionIndex = 50249;

	class LuaHookMask : public ::System::Object
	{
	public:
		// static const ::System::Object CLOSE; // 0x0
		// static const ::System::Object CALL; // 0x0
		// static const ::System::Object RETURN; // 0x0
		// static const ::System::Object LINE; // 0x0
		// static const ::System::Object COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAHOOKMASK_CTOR_OFFSET))(this);
		}

	};
}
