#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObjCRuntimeInternal { class INativeObject; }

#define OBJCRUNTIMEINTERNAL_NATIVEOBJECTHELPER_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x1DAD6CB0)

namespace ObjCRuntimeInternal
{
	inline static constexpr unsigned int NativeObjectHelper_TypeDefinitionIndex = 2650;

	class NativeObjectHelper : public ::System::Object
	{
	public:
		static ::System::IntPtr GetHandle(::ObjCRuntimeInternal::INativeObject* self)
		{
			return ((::System::IntPtr(*)(::ObjCRuntimeInternal::INativeObject*))((::PBYTE)hIl2Cpp + OBJCRUNTIMEINTERNAL_NATIVEOBJECTHELPER_GETHANDLE_OFFSET))(self);
		}
	};
}
