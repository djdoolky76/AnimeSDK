#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class B08F6BCD4446683A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A014CBBAB785CF15_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2238E00)
#define A014CBBAB785CF15__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A014CBBAB785CF15_TypeDefinitionIndex = 9175;

class A014CBBAB785CF15 : public ::System::Object
{
public:
	::System::UInt32 F2F60834D9E52453; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::B08F6BCD4446683A*>* A15D05311910C53F; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A014CBBAB785CF15* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A014CBBAB785CF15*))((::PBYTE)hIl2Cpp + A014CBBAB785CF15_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A014CBBAB785CF15__CTOR_OFFSET))(this);
	}
};
