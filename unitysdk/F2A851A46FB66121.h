#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F2A851A46FB66121_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F2A851A46FB66121__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F2A851A46FB66121_TypeDefinitionIndex = 9170;

class F2A851A46FB66121 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2A851A46FB66121__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F2A851A46FB66121* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F2A851A46FB66121*))((::PBYTE)hIl2Cpp + F2A851A46FB66121_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
