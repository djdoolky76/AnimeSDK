#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A6F71961E1D20B9D.h"
#include "unitysdk/E68AA4EB51923C98/F3895DA74C2A1F85.h"
#include "unitysdk/System/Object.h"

template <typename T> class EA3E397DEE94ABA8;

#define E4FDF0553CEEC53E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4FDF0553CEEC53E_TypeDefinitionIndex = 8114;

class E4FDF0553CEEC53E : public ::System::Object
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::System::UInt32 B97789B17D6C3701; // 0x14
	::EA3E397DEE94ABA8<::System::UInt32>* B2592F3774F92DC9; // 0x18
	::E68AA4EB51923C98::A6F71961E1D20B9D BE7EF3E231D9A66B; // 0x20
	::E68AA4EB51923C98::F3895DA74C2A1F85 EB228493E2660757; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4FDF0553CEEC53E__CTOR_OFFSET))(this);
	}
};
