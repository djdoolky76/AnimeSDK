#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeType.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define SYSTEM_REFLECTIONONLYTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B2750)
#define SYSTEM_REFLECTIONONLYTYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C2B2780)

namespace System
{
	class ReflectionOnlyType : public ::System::RuntimeType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTIONONLYTYPE_CTOR_OFFSET))(this);
		}

		::System::RuntimeTypeHandle get_TypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTIONONLYTYPE_GET_TYPEHANDLE_OFFSET))(this);
		}

	};
}
