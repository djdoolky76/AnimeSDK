#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F76D857DEDB76FD5.h"

#define A055A9AB881438E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A055A9AB881438E7_TypeDefinitionIndex = 1242;

class A055A9AB881438E7 : public ::E379DE61A548837D
{
public:
	::System::Boolean FBC0248000618FDD; // 0x38
	::System::Byte _padding0[0x3];
	::E68AA4EB51923C98::F76D857DEDB76FD5 F3B10F89119BC2B4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A055A9AB881438E7__CTOR_OFFSET))(this);
	}
};
