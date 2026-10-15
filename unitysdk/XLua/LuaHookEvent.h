#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUAHOOKEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x14DB6840)

namespace XLua
{
	inline static constexpr unsigned int LuaHookEvent_TypeDefinitionIndex = 50250;

	class LuaHookEvent : public ::System::Object
	{
	public:
		// static const ::System::Object CALL; // 0x0
		// static const ::System::Object RETURN; // 0x0
		// static const ::System::Object LINE; // 0x0
		// static const ::System::Object COUNT; // 0x0
		// static const ::System::Object TAIL_CALL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAHOOKEVENT_CTOR_OFFSET))(this);
		}

	};
}
