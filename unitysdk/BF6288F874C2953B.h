#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8C1635F85E9BC30.h"
#include "unitysdk/System/E627EB1F587E4D62.h"

#define BF6288F874C2953B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B469E0)
#define BF6288F874C2953B__CTOR_OFFSET UNITYSDK_OFFSET(0x3B46A40)

inline static constexpr unsigned int BF6288F874C2953B_TypeDefinitionIndex = 10268;

class BF6288F874C2953B : public ::E8C1635F85E9BC30
{
public:
	::System::E627EB1F587E4D62 A103104C8ACB8821; // 0x10
	::System::Boolean ACEC9C9DDBAB879F; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF6288F874C2953B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::E627EB1F587E4D62 A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::E627EB1F587E4D62))((::PBYTE)hIl2Cpp + BF6288F874C2953B__CTOR_1_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
