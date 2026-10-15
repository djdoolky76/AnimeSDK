#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F115320)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F115310)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F115200)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1152B0)

namespace Cysharp::Threading::Tasks
{
	class CancellationTokenEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>** StaticGet_Default()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "CancellationTokenEqualityComparer")->GetStaticField(0x3EBA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Threading::CancellationToken a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Threading::CancellationToken a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
