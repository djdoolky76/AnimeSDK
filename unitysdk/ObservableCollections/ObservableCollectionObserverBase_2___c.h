#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionObserverBase_2___c_TypeDefinitionIndex = 41368;

	template <typename T1, typename T2>
	class ObservableCollectionObserverBase_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("ObservableCollections", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("ObservableCollections", "<>c")->GetStaticField(0x0);
		}

	};
}
