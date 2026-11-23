#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
template <typename T> class FA9B773E8C9B97E9;

inline static constexpr unsigned int FA9B773E8C9B97E9_TypeDefinitionIndex = 19590;

template <typename T>
class FA9B773E8C9B97E9 : public ::System::Object
{
public:
	static ::ABC::Collections::Pooled::PooledList_1<T>** StaticGet_FCCC4198F3A0FDA4()
	{
		return (::ABC::Collections::Pooled::PooledList_1<T>**)Il2CppClass::FromTypeDefinitionIndex(FA9B773E8C9B97E9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::FA9B773E8C9B97E9<T>** StaticGet_BDC1E8E781853683()
	{
		return (::FA9B773E8C9B97E9<T>**)Il2CppClass::FromTypeDefinitionIndex(FA9B773E8C9B97E9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::ABC::Collections::Pooled::PooledList_1<T>* A3B1F2122400E153; // 0x0
};
