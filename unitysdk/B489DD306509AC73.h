#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B489DD306509AC73__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B489DD306509AC73_TypeDefinitionIndex = 8407;

class B489DD306509AC73 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B240C78BB6BC8182; // 0x38
	::System::UInt32 B289D9A1F114D305; // 0x3C
	::System::Boolean EBBDD652B548DE2B; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B489DD306509AC73__CTOR_OFFSET))(this);
	}
};
