#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTaskExtensions___c__32_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c__32`1")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c__32`1")->GetStaticField(0x0);
		}

	};
}
