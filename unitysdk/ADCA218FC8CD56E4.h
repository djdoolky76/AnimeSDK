#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define ADCA218FC8CD56E4_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FCC250)
#define ADCA218FC8CD56E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCA218FC8CD56E4_TypeDefinitionIndex = 8027;

class ADCA218FC8CD56E4 : public ::System::Object
{
public:
	::System::UInt32 FEFDA56AC69A9292; // 0x10
	::System::UInt32 FE2FB0D55556BFD9; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::ADCA218FC8CD56E4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::ADCA218FC8CD56E4*))((::PBYTE)hIl2Cpp + ADCA218FC8CD56E4_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCA218FC8CD56E4__CTOR_OFFSET))(this);
	}
};
