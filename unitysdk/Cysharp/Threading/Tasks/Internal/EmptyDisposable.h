#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { class EmptyDisposable; }

#define CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F11D220)
#define CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F11D200)
#define CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F11D210)

namespace Cysharp::Threading::Tasks::Internal
{
	class EmptyDisposable : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::EmptyDisposable** StaticGet_Instance()
		{
			return (::Cysharp::Threading::Tasks::Internal::EmptyDisposable**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "EmptyDisposable")->GetStaticField(0x3F620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_EMPTYDISPOSABLE_DISPOSE_OFFSET))(this);
		}

	};
}
