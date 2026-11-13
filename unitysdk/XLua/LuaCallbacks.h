#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUACALLBACKS_CTOR_OFFSET UNITYSDK_OFFSET(0x12B9F070)
#define XLUA_LUACALLBACKS_INITARRAYGET_OFFSET UNITYSDK_OFFSET(0x12B9F060)

namespace XLua
{
	inline static constexpr unsigned int LuaCallbacks_TypeDefinitionIndex = 51309;

	class LuaCallbacks : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUACALLBACKS_CTOR_OFFSET))(this);
		}

		::System::Void initArrayGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUACALLBACKS_INITARRAYGET_OFFSET))(this);
		}

	};
}
