#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
class JHOCADLMHCA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHOCADLMHCA___GETACCESSTOKEN_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10BA0)
#define JHOCADLMHCA___GETACCESSTOKEN_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B60)

inline static constexpr unsigned int JHOCADLMHCA___GetAccessToken_d__12_TypeDefinitionIndex = 50043;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	struct alignas(8) JHOCADLMHCA___GetAccessToken_d__12
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::JHOCADLMHCA* __4__this; // 0x28
		::System::Object* __u__1; // 0x30
		::System::Byte _padding1[0x8];
		::System::Object* __u__2; // 0x40
		::System::Byte _padding2[0x8];
		::System::Net::Http::HttpClient* _client_5__2; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA___GETACCESSTOKEN_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHOCADLMHCA___GETACCESSTOKEN_D__12_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
