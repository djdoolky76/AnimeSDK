#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJKHLPEHFLA;
class KOIDMLPJGML;
class PLDJFGCHMKK;

#define IMHHAEAFMLL_CLGGMBAJLEE_JEMDOLCCLMP_OFFSET UNITYSDK_OFFSET(0x1942DCB0)
#define IMHHAEAFMLL_CLGGMBAJLEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1942DCA0)

inline static constexpr unsigned int IMHHAEAFMLL_CLGGMBAJLEE_TypeDefinitionIndex = 72234;

class IMHHAEAFMLL_CLGGMBAJLEE : public ::System::Object
{
public:
	::CJKHLPEHFLA* BKFGEPPGBEK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHHAEAFMLL_CLGGMBAJLEE__CTOR_OFFSET))(this);
	}

	::KOIDMLPJGML* JEMDOLCCLMP(::PLDJFGCHMKK* HAAEBCOBKFF)
	{
		return ((::KOIDMLPJGML*(*)(::PVOID, ::PLDJFGCHMKK*))((::PBYTE)hIl2Cpp + IMHHAEAFMLL_CLGGMBAJLEE_JEMDOLCCLMP_OFFSET))(this, HAAEBCOBKFF);
	}
};
