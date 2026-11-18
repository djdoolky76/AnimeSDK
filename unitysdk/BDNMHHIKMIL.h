#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

class JMNDEAFIAAF;

#define BDNMHHIKMIL_JGMKMLCADDN_OFFSET UNITYSDK_OFFSET(0x143D0A00)
#define BDNMHHIKMIL__CTOR_OFFSET UNITYSDK_OFFSET(0x143D0A60)

inline static constexpr unsigned int BDNMHHIKMIL_TypeDefinitionIndex = 54050;

class BDNMHHIKMIL : public ::BBKFNNHAKBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNMHHIKMIL__CTOR_OFFSET))(this);
	}

	::System::Void JGMKMLCADDN(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + BDNMHHIKMIL_JGMKMLCADDN_OFFSET))(this, AAOCANGHBDG);
	}
};
