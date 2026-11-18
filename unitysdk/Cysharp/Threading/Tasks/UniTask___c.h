#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define CYSHARP_THREADING_TASKS_UNITASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA390)
#define CYSHARP_THREADING_TASKS_UNITASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA3D0)
#define CYSHARP_THREADING_TASKS_UNITASK___C___CCTOR_B__148_0_OFFSET UNITYSDK_OFFSET(0x1FEBA3E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c_TypeDefinitionIndex = 31334;

	class UniTask___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UniTask___c_TypeDefinitionIndex)->GetStaticField(0x28230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask __cctor_b__148_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C___CCTOR_B__148_0_OFFSET))(this);
		}
	};
}
