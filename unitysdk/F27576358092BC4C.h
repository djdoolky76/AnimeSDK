#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B3687AB065DF94CB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F27576358092BC4C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2371B90)
#define F27576358092BC4C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F27576358092BC4C_TypeDefinitionIndex = 3335;

class F27576358092BC4C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* A7D679E0E08AFBC4; // 0x10
	::B3687AB065DF94CB* E1487C8B46FC9BFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F27576358092BC4C__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F27576358092BC4C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F27576358092BC4C*&))((::PBYTE)hIl2Cpp + F27576358092BC4C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
