#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_TypeConstraints_TypeDefinitionIndex = 86333;

	template <typename T>
	class TSparseList_1_TypeConstraints : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Creator()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TSparseList_1_TypeConstraints_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_Deleter()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TSparseList_1_TypeConstraints_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
