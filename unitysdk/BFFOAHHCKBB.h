#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDICOCNAAKL.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/KLMCEAJDKLL.h"
#include "unitysdk/NLAOAFGNDNF.h"
#include "unitysdk/System/Nullable_1.h"

class KGBFLHNJHHN;

#define BFFOAHHCKBB_CNBPCEGCGIO_OFFSET UNITYSDK_OFFSET(0x17758EB0)
#define BFFOAHHCKBB__CTOR_OFFSET UNITYSDK_OFFSET(0x17758EA0)

inline static constexpr unsigned int BFFOAHHCKBB_TypeDefinitionIndex = 15665;

class BFFOAHHCKBB : public ::HDICOCNAAKL
{
public:
	::System::Void _ctor(::KLMCEAJDKLL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLMCEAJDKLL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BFFOAHHCKBB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Nullable_1<::NLAOAFGNDNF> CNBPCEGCGIO(::Share::EPropertyType OBNIAHNMHPF)
	{
		return ((::System::Nullable_1<::NLAOAFGNDNF>(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + BFFOAHHCKBB_CNBPCEGCGIO_OFFSET))(this, OBNIAHNMHPF);
	}
};
