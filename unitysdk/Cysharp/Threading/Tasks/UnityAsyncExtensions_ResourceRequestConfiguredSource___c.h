#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F160A70)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F160AB0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1F160B20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F160AC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_ResourceRequestConfiguredSource___c_TypeDefinitionIndex = 38461;

	class UnityAsyncExtensions_ResourceRequestConfiguredSource___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x49560);
		}

		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x49568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__14_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE___C__CREATE_B__14_0_OFFSET))(this, a1);
		}

	};
}
