#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA5E67E68CAA0B47.h"

#define BC382F975F8E6B70_F42383153AF638C3_OFFSET UNITYSDK_OFFSET(0x25E8260)
#define BC382F975F8E6B70__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int BC382F975F8E6B70_TypeDefinitionIndex = 5724;

class BC382F975F8E6B70 : public ::AA5E67E68CAA0B47
{
public:
	::System::Void F42383153AF638C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC382F975F8E6B70_F42383153AF638C3_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC382F975F8E6B70__CTOR_OFFSET))(this);
	}
};
