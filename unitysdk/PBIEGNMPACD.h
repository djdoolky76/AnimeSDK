#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define PBIEGNMPACD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178AFFA0)
#define PBIEGNMPACD_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x178B0170)
#define PBIEGNMPACD__CTOR_OFFSET UNITYSDK_OFFSET(0x178B0350)

inline static constexpr unsigned int PBIEGNMPACD_TypeDefinitionIndex = 49402;

class PBIEGNMPACD : public ::BDNMHHIKMIL
{
public:
	::System::Int32 BIANLJMMPGE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGNMPACD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIEGNMPACD_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + PBIEGNMPACD_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
