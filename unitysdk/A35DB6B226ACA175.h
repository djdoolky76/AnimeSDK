#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A35DB6B226ACA175_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A35DB6B226ACA175__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A35DB6B226ACA175_TypeDefinitionIndex = 7618;

class A35DB6B226ACA175 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A35DB6B226ACA175* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A35DB6B226ACA175*))((::PBYTE)hIl2Cpp + A35DB6B226ACA175_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A35DB6B226ACA175__CTOR_OFFSET))(this);
	}
};
