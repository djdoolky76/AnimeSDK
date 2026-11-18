#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class KOIDMLPJGML;
class PLDJFGCHMKK;

#define FIKOFAFHAHI_PKNLFDKFBHP_FBMNCHNLIFH_OFFSET UNITYSDK_OFFSET(0x156BFFA0)
#define FIKOFAFHAHI_PKNLFDKFBHP__CTOR_OFFSET UNITYSDK_OFFSET(0x156BFF90)

inline static constexpr unsigned int FIKOFAFHAHI_PKNLFDKFBHP_TypeDefinitionIndex = 51916;

class FIKOFAFHAHI_PKNLFDKFBHP : public ::System::Object
{
public:
	::AOJKLCGGPAK* PLBEAIIJADM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKOFAFHAHI_PKNLFDKFBHP__CTOR_OFFSET))(this);
	}

	::KOIDMLPJGML* FBMNCHNLIFH(::PLDJFGCHMKK* HAAEBCOBKFF)
	{
		return ((::KOIDMLPJGML*(*)(::PVOID, ::PLDJFGCHMKK*))((::PBYTE)hIl2Cpp + FIKOFAFHAHI_PKNLFDKFBHP_FBMNCHNLIFH_OFFSET))(this, HAAEBCOBKFF);
	}
};
