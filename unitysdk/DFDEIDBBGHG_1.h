#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

inline static constexpr unsigned int DFDEIDBBGHG_1_TypeDefinitionIndex = 18216;

template <typename T>
class DFDEIDBBGHG_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_NJDIHALJAJB()
	{
		return (::System::Collections::Generic::EqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DFDEIDBBGHG_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<T>** StaticGet_FBNHGIJENOL()
	{
		return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(DFDEIDBBGHG_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<T>* GMHJGPODKLM; // 0x0
	::System::Int32 JHFKDGBCOBA; // 0x0
};
