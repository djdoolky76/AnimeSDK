#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int F95092B9687E57D9_TypeDefinitionIndex = 21127;

template <typename T>
class F95092B9687E57D9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<T, ::System::String*>** StaticGet_A2AC4976855B375E()
	{
		return (::System::Collections::Generic::Dictionary_2<T, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F95092B9687E57D9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<T, ::Il2CppArray<::System::Byte>*>** StaticGet_F2AC8CB729317B42()
	{
		return (::System::Collections::Generic::Dictionary_2<T, ::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(F95092B9687E57D9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
