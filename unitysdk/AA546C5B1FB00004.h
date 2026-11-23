#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define AA546C5B1FB00004_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AA546C5B1FB00004__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA546C5B1FB00004_TypeDefinitionIndex = 7923;

class AA546C5B1FB00004 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AA546C5B1FB00004* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AA546C5B1FB00004*))((::PBYTE)hIl2Cpp + AA546C5B1FB00004_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA546C5B1FB00004__CTOR_OFFSET))(this);
	}
};
