#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c__51_1_TypeDefinitionIndex = 38413;

	template <typename T>
	class UniTaskExtensions___c__51_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c__51`1")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__51_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c__51`1")->GetStaticField(0x0);
		}

	};
}
