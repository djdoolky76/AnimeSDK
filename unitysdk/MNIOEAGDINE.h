#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define MNIOEAGDINE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F62B20)
#define MNIOEAGDINE_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x11F62B60)
#define MNIOEAGDINE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F63000)

inline static constexpr unsigned int MNIOEAGDINE_TypeDefinitionIndex = 63109;

class MNIOEAGDINE : public ::BDNMHHIKMIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIOEAGDINE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIOEAGDINE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + MNIOEAGDINE_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
