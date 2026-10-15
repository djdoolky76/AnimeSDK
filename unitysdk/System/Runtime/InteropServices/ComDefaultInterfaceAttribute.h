#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMDEFAULTINTERFACEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C87C0)

namespace System::Runtime::InteropServices
{
	class ComDefaultInterfaceAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _val; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMDEFAULTINTERFACEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
