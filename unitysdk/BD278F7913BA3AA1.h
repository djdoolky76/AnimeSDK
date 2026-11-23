#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

#define BD278F7913BA3AA1_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28E9300)
#define BD278F7913BA3AA1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BD278F7913BA3AA1_TypeDefinitionIndex = 16427;

class BD278F7913BA3AA1 : public ::ABEBA93AD61764EF
{
public:
	::System::Boolean ED3A1029105A3C5B; // 0x18

	::System::Boolean FC3208D7B8C7EE04(::BD278F7913BA3AA1* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::BD278F7913BA3AA1*))((::PBYTE)hIl2Cpp + BD278F7913BA3AA1_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD278F7913BA3AA1__CTOR_OFFSET))(this);
	}
};
