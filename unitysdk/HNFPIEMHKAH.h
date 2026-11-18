#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define HNFPIEMHKAH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B6F070)
#define HNFPIEMHKAH_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x15B6F0B0)
#define HNFPIEMHKAH__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F260)

inline static constexpr unsigned int HNFPIEMHKAH_TypeDefinitionIndex = 70809;

class HNFPIEMHKAH : public ::BDNMHHIKMIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFPIEMHKAH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFPIEMHKAH_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + HNFPIEMHKAH_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
