#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A273BF688BE63A4F_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A273BF688BE63A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A273BF688BE63A4F_TypeDefinitionIndex = 6983;

class A273BF688BE63A4F : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A273BF688BE63A4F* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A273BF688BE63A4F*))((::PBYTE)hIl2Cpp + A273BF688BE63A4F_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A273BF688BE63A4F__CTOR_OFFSET))(this);
	}
};
