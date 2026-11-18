#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionsExtensions_AnonymousComparer_2_TypeDefinitionIndex = 28082;

	template <typename T1, typename T2>
	class ObservableCollectionsExtensions_AnonymousComparer_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, T2>* selector; // 0x0
		::System::Int32 f; // 0x0
	};
}
