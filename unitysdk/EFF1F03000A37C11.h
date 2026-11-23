#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EFF1F03000A37C11_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1AD90)
#define EFF1F03000A37C11__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFF1F03000A37C11_TypeDefinitionIndex = 8288;

class EFF1F03000A37C11 : public ::System::Object
{
public:
	::System::UInt32 E05253A39CDB0751; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EFF1F03000A37C11* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EFF1F03000A37C11*))((::PBYTE)hIl2Cpp + EFF1F03000A37C11_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF1F03000A37C11__CTOR_OFFSET))(this);
	}
};
