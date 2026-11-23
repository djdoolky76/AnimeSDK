#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A6B8CAAB87A483DF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAE126BD5FE568DD_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2613AA0)
#define FAE126BD5FE568DD_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2613690)
#define FAE126BD5FE568DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FAE126BD5FE568DD_TypeDefinitionIndex = 5974;

class FAE126BD5FE568DD : public ::System::Object
{
public:
	::System::Int32 A9B91FF0BF67ACF0; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A61806D1B8904679; // 0x18
	::A6B8CAAB87A483DF* F08D315B078D4611; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::A6B8CAAB87A483DF*>* BDA3C536048E6BE6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAE126BD5FE568DD__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FAE126BD5FE568DD*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FAE126BD5FE568DD*&))((::PBYTE)hIl2Cpp + FAE126BD5FE568DD_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FAE126BD5FE568DD* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FAE126BD5FE568DD*))((::PBYTE)hIl2Cpp + FAE126BD5FE568DD_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
