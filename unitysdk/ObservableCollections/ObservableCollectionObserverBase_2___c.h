#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

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

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("ObservableCollections", "<>c")->GetStaticField(0x0);
		}

	};
}
