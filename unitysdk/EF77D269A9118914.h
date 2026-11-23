#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EF77D269A9118914_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define EF77D269A9118914__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF77D269A9118914_TypeDefinitionIndex = 8100;

class EF77D269A9118914 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EF77D269A9118914* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EF77D269A9118914*))((::PBYTE)hIl2Cpp + EF77D269A9118914_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF77D269A9118914__CTOR_OFFSET))(this);
	}
};
