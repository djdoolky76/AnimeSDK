#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FE60F431CDE05E01__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FE60F431CDE05E01_TypeDefinitionIndex = 1436;

class FE60F431CDE05E01 : public ::E379DE61A548837D
{
public:
	::System::UInt64 F4345313E4D67446; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE60F431CDE05E01__CTOR_OFFSET))(this);
	}
};
