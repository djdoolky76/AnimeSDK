#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class KFGCLOPEGJO_HKFNAAPGIJK;
template <typename T> class BFMLEHMAGAK_1;

#define KFGCLOPEGJO_LLBHMNHBDAC_MJLBOPALPMF_OFFSET UNITYSDK_OFFSET(0x15B87DF0)
#define KFGCLOPEGJO_LLBHMNHBDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B87DE0)

inline static constexpr unsigned int KFGCLOPEGJO_LLBHMNHBDAC_TypeDefinitionIndex = 78910;

class KFGCLOPEGJO_LLBHMNHBDAC : public ::System::Object
{
public:
	::BFMLEHMAGAK_1<::System::Boolean>* FAJHBHGOHDI; // 0x10
	::KFGCLOPEGJO_HKFNAAPGIJK* KGFKHBMEKBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_LLBHMNHBDAC__CTOR_OFFSET))(this);
	}

	::System::Void MJLBOPALPMF(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_LLBHMNHBDAC_MJLBOPALPMF_OFFSET))(this, KOIBHLHLMFC);
	}
};
