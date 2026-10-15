#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Lookup_2_TypeDefinitionIndex = 45687;

	template <typename T1, typename T2>
	class ToLookup_Lookup_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, ::System::Object*>* dict; // 0x0
		static ::System::Object** StaticGet_empty()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "Lookup`2")->GetStaticField(0x0);
		}

	};
}
