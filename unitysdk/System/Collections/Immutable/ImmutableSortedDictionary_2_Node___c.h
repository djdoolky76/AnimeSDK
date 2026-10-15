#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_Node___c_TypeDefinitionIndex = 6651;

	template <typename T1, typename T2>
	class ImmutableSortedDictionary_2_Node___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Collections.Immutable", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, T1>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, T1>**)UnitySDK::FromName("System.Collections.Immutable", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, T2>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, T2>**)UnitySDK::FromName("System.Collections.Immutable", "<>c")->GetStaticField(0x0);
		}

	};
}
