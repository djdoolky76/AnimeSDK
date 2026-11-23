#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/E4FDF0553CEEC53E.h"

template <typename T> class EA3E397DEE94ABA8;

#define A8C88E76C2994D76__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A8C88E76C2994D76_TypeDefinitionIndex = 7885;

class A8C88E76C2994D76 : public ::E4FDF0553CEEC53E
{
public:
	::System::UInt32 BADE7C2F0FAED002; // 0x28
	::System::UInt32 BAEBC60E7FEC7749; // 0x2C
	::EA3E397DEE94ABA8<::B07850EA97DBB75A<::System::UInt32, ::System::UInt32>>* B029DBB4357BFEA3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8C88E76C2994D76__CTOR_OFFSET))(this);
	}
};
