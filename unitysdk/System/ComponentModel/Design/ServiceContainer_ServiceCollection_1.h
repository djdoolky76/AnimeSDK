#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ServiceContainer_ServiceCollection_1_TypeDefinitionIndex = 3089;

	template <typename T>
	class ServiceContainer_ServiceCollection_1
	{
	public:
		static ::System::Object** StaticGet_serviceTypeComparer()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ServiceContainer_ServiceCollection_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
