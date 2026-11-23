#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_ARRAY_FA6AF5CD9C9A7090__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int Array_FA6AF5CD9C9A7090_TypeDefinitionIndex = 10901;

	class Array_FA6AF5CD9C9A7090 : public ::System::Object
	{
	public:
		::System::IntPtr FC4708797CCDF9FE; // 0x10
		::System::IntPtr EEE4F084E077C7A0; // 0x18
		::System::Byte AD13C6A9CD32769F; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_FA6AF5CD9C9A7090__CTOR_OFFSET))(this);
		}
	};
}
