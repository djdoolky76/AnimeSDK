#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Register.h"
#include "unitysdk/System/ValueType.h"

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_1_TypeDefinitionIndex = 6541;

	template <typename T>
	struct alignas(4) Vector_1
	{
		static ::System::Int32* StaticGet_s_count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::Vector_1<T>* StaticGet_zero()
		{
			return (::System::Numerics::Vector_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::Vector_1<T>* StaticGet_one()
		{
			return (::System::Numerics::Vector_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::Vector_1<T>* StaticGet_allOnes()
		{
			return (::System::Numerics::Vector_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Numerics::Register register_; // 0x0
	};
}
