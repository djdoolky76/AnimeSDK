#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x40F2CE0)
#define UNITYENGINE_ANDROIDJAVAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x40F2C60)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaException_TypeDefinitionIndex = 20622;

	class AndroidJavaException : public ::System::Exception
	{
	public:
		::System::String* mJavaStackTrace; // 0x90

		::System::Void _ctor(::System::String* B083BE7841B347C4, ::System::String* A153FD0F78356AB9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4, A153FD0F78356AB9);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAEXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}
	};
}
