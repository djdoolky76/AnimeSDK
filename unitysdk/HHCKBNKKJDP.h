#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define HHCKBNKKJDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1101A180)
#define HHCKBNKKJDP_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x11019FF0)
#define HHCKBNKKJDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1101A360)

inline static constexpr unsigned int HHCKBNKKJDP_TypeDefinitionIndex = 43976;

class HHCKBNKKJDP : public ::BDNMHHIKMIL
{
public:
	::System::Single PDJKHPKBLFD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNKKJDP__CTOR_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + HHCKBNKKJDP_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKBNKKJDP_OJENCMOGDKL_OFFSET))(this);
	}
};
