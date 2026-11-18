#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class DefaultResourceConstructor_2; }

namespace Foundation
{
	inline static constexpr unsigned int DefaultResourceConstructor_2_TypeDefinitionIndex = 8755;

	template <typename T1, typename T2>
	class DefaultResourceConstructor_2 : public ::System::Object
	{
	public:
		static ::Foundation::DefaultResourceConstructor_2<T1, T2>** StaticGet_Default()
		{
			return (::Foundation::DefaultResourceConstructor_2<T1, T2>**)Il2CppClass::FromTypeDefinitionIndex(DefaultResourceConstructor_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
