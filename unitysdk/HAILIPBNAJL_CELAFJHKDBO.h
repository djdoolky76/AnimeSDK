#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAILIPBNAJL_CELAFJHKDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C62D800)

inline static constexpr unsigned int HAILIPBNAJL_CELAFJHKDBO_TypeDefinitionIndex = 36408;

	class HAILIPBNAJL_CELAFJHKDBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NNHNFKAGIMK; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* OPOPOPJBFOE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAILIPBNAJL_CELAFJHKDBO_CTOR_OFFSET))(this);
		}

	};
