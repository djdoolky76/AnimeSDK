#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A9BCC1F512C50301_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A9BCC1F512C50301__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9BCC1F512C50301_TypeDefinitionIndex = 9195;

class A9BCC1F512C50301 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A9BCC1F512C50301* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A9BCC1F512C50301*))((::PBYTE)hIl2Cpp + A9BCC1F512C50301_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9BCC1F512C50301__CTOR_OFFSET))(this);
	}
};
