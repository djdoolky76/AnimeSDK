#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define FEB305022EC26F22__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FEB305022EC26F22_TypeDefinitionIndex = 72;

class FEB305022EC26F22 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* F24F89B03931F93E; // 0x38
	::AB642D1382756991* BE6C1E811736AAA3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEB305022EC26F22__CTOR_OFFSET))(this);
	}
};
