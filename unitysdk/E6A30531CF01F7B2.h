#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E6A30531CF01F7B2_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F220D0)
#define E6A30531CF01F7B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6A30531CF01F7B2_TypeDefinitionIndex = 7545;

class E6A30531CF01F7B2 : public ::System::Object
{
public:
	::System::UInt32 FD58A19A41F4FF6B; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6A30531CF01F7B2__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E6A30531CF01F7B2* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E6A30531CF01F7B2*))((::PBYTE)hIl2Cpp + E6A30531CF01F7B2_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
