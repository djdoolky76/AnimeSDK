#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define FD1AE65CCFB45C79__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FD1AE65CCFB45C79_TypeDefinitionIndex = 8426;

class FD1AE65CCFB45C79 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* AC059E02D360C64E; // 0x38
	::ABC::Config::WwiseEvent F642DF094887EE91; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD1AE65CCFB45C79__CTOR_OFFSET))(this);
	}
};
