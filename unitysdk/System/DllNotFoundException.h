#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeLoadException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DLLNOTFOUNDEXCEPTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C2040C0)
#define SYSTEM_DLLNOTFOUNDEXCEPTION_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C204130)
#define SYSTEM_DLLNOTFOUNDEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C204020)

namespace System
{
	class DllNotFoundException : public ::System::TypeLoadException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_CTOR_2_OFFSET))(this, a1, a2);
		}

	};
}
