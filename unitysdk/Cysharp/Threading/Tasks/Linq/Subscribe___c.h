#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F10B0B0)
#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F10B0F0)
#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F10B100)
#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_1_OFFSET UNITYSDK_OFFSET(0x1F10B110)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Subscribe___c_TypeDefinitionIndex = 45602;

	class Subscribe___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x1190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__8_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_0_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_1_OFFSET))(this);
		}

	};
}
