#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class IProgress_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int Progress_NullProgress_1_TypeDefinitionIndex = 38216;

	template <typename T>
	class Progress_NullProgress_1 : public ::System::Object
	{
	public:
		static ::System::IProgress_1<T>** StaticGet_Instance()
		{
			return (::System::IProgress_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "NullProgress`1")->GetStaticField(0x0);
		}

	};
}
