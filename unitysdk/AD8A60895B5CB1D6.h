#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

#define AD8A60895B5CB1D6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AD8A60895B5CB1D6_TypeDefinitionIndex = 2009;

class AD8A60895B5CB1D6 : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID ACC4695EBAE594B8; // 0x38
	::System::Boolean B6EA5D042006FB95; // 0x48
	::System::Byte _padding0[0x3];
	::System::UInt32 EE38E4CF1A141F00; // 0x4C
	::System::UInt32 EF76C23A02DB63B0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD8A60895B5CB1D6__CTOR_OFFSET))(this);
	}
};
