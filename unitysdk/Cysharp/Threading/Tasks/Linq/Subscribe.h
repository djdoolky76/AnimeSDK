#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0DD5F0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Subscribe_TypeDefinitionIndex = 45601;

	class Subscribe : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet_NopError()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "Subscribe")->GetStaticField(0x11A0);
		}

		static ::System::Action** StaticGet_NopCompleted()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "Subscribe")->GetStaticField(0x11A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE_CCTOR_OFFSET))();
		}

	};
}
