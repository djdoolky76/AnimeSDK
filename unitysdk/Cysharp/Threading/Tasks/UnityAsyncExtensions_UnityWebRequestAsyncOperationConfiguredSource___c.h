#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F161950)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F161990)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1F161A00)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F1619A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource___c_TypeDefinitionIndex = 38470;

	class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x49600);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x49608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__14_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET))(this, a1);
		}

	};
}
