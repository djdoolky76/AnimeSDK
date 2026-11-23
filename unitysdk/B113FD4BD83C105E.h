#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B113FD4BD83C105E_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22D73F0)
#define B113FD4BD83C105E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B113FD4BD83C105E_TypeDefinitionIndex = 7230;

class B113FD4BD83C105E : public ::System::Object
{
public:
	::System::Boolean B309682DB18FE55C; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 E9C8CDEBECD7B599; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B113FD4BD83C105E__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B113FD4BD83C105E* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B113FD4BD83C105E*))((::PBYTE)hIl2Cpp + B113FD4BD83C105E_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
