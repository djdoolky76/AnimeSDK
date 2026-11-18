#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

inline static constexpr unsigned int DOCMLOIOBEN_1_TypeDefinitionIndex = 92918;

template <typename T>
class DOCMLOIOBEN_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<T>** StaticGet_AIBLPKLIGNK()
	{
		return (::System::Collections::Generic::Stack_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DOCMLOIOBEN_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static T* StaticGet_EGENKJPKJEI()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(DOCMLOIOBEN_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
