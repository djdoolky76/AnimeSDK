#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Xml { class XmlUrlResolver; }

#define SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C597F0)
#define SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUrlResolver__GetEntityAsync_d__15_TypeDefinitionIndex = 1971;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	struct alignas(8) XmlUrlResolver__GetEntityAsync_d__15
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::System::Type* ofObjectToReturn; // 0x28
		::System::Uri* absoluteUri; // 0x30
		::System::Object* __u__1; // 0x38
		::System::Byte _padding1[0x8];
		::System::Xml::XmlUrlResolver* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLURLRESOLVER__GETENTITYASYNC_D__15_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
