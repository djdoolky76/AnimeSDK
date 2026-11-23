#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B491168C545A82CD_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B491168C545A82CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B491168C545A82CD_TypeDefinitionIndex = 8528;

class B491168C545A82CD : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B491168C545A82CD* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B491168C545A82CD*))((::PBYTE)hIl2Cpp + B491168C545A82CD_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B491168C545A82CD__CTOR_OFFSET))(this);
	}
};
