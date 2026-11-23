#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AAB48281B5C8DC6E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A1D6A6889FBA25E5_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x260ABA0)
#define A1D6A6889FBA25E5_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x260A710)
#define A1D6A6889FBA25E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1D6A6889FBA25E5_TypeDefinitionIndex = 5836;

class A1D6A6889FBA25E5 : public ::System::Object
{
public:
	::System::Int32 A9B91FF0BF67ACF0; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A61806D1B8904679; // 0x18
	::AAB48281B5C8DC6E* F08D315B078D4611; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AAB48281B5C8DC6E*>* BDA3C536048E6BE6; // 0x28
	::System::UInt64 E977342ED98724A3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1D6A6889FBA25E5__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A1D6A6889FBA25E5* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A1D6A6889FBA25E5*))((::PBYTE)hIl2Cpp + A1D6A6889FBA25E5_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A1D6A6889FBA25E5*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A1D6A6889FBA25E5*&))((::PBYTE)hIl2Cpp + A1D6A6889FBA25E5_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
