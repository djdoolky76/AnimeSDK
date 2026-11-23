#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E11CDEF7D26C8468.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
template <typename T> class A6BD1481B428D888;

inline static constexpr unsigned int A6BD1481B428D888_TypeDefinitionIndex = 20050;

template <typename T>
class A6BD1481B428D888 : public ::System::Object
{
public:
	static ::E11CDEF7D26C8468<::A6BD1481B428D888<T>*>* StaticGet_AA56DA64D27331A9()
	{
		return (::E11CDEF7D26C8468<::A6BD1481B428D888<T>*>*)Il2CppClass::FromTypeDefinitionIndex(A6BD1481B428D888_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	T FF331EB1F030063C; // 0x0
	::System::Action* E5C375BB741CDFBA; // 0x0
	::A6BD1481B428D888<T>* BDB85987CD0A153D; // 0x0
};
