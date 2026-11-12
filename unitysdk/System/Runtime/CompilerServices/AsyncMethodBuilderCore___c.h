#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D44D340)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D44D380)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D44D390)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D44D450)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore___c_TypeDefinitionIndex = 1357;

	class AsyncMethodBuilderCore___c : public ::System::Object
	{
	public:
		static ::System::Threading::WaitCallback** StaticGet___9__6_1()
		{
			return (::System::Threading::WaitCallback**)UnitySDK::FromName("System.Runtime.CompilerServices", "<>c")->GetStaticField(0x197E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Runtime.CompilerServices", "<>c")->GetStaticField(0x197E8);
		}

		static ::System::Threading::SendOrPostCallback** StaticGet___9__6_0()
		{
			return (::System::Threading::SendOrPostCallback**)UnitySDK::FromName("System.Runtime.CompilerServices", "<>c")->GetStaticField(0x197F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C_CTOR_OFFSET))(this);
		}

		::System::Void _ThrowAsync_b__6_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _ThrowAsync_b__6_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_1_OFFSET))(this, a1);
		}

	};
}
