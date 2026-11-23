#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F90AC61E7CFBA2C0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A9179594B9218B96_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26F4010)
#define A9179594B9218B96__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9179594B9218B96_TypeDefinitionIndex = 2776;

class A9179594B9218B96 : public ::System::Object
{
public:
	::System::String* A61806D1B8904679; // 0x10
	::System::String* B885136EDFF5F06D; // 0x18
	::System::Collections::Generic::List_1<::F90AC61E7CFBA2C0*>* E94C94B2B9751B70; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9179594B9218B96__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A9179594B9218B96*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A9179594B9218B96*&))((::PBYTE)hIl2Cpp + A9179594B9218B96_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
