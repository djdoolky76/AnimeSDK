#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;

#define IFMDFCENEDE_PGPBAHBKGME_KPMMMADKMHG_OFFSET UNITYSDK_OFFSET(0x16A970A0)
#define IFMDFCENEDE_PGPBAHBKGME__CTOR_OFFSET UNITYSDK_OFFSET(0x16A97090)

inline static constexpr unsigned int IFMDFCENEDE_PGPBAHBKGME_TypeDefinitionIndex = 50758;

class IFMDFCENEDE_PGPBAHBKGME : public ::System::Object
{
public:
	::CJIEIHEDMME* MPNOOFCKMLM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDFCENEDE_PGPBAHBKGME__CTOR_OFFSET))(this);
	}

	::AOJKLCGGPAK* KPMMMADKMHG(::System::Int32 FKDONKGGAIF)
	{
		return ((::AOJKLCGGPAK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFMDFCENEDE_PGPBAHBKGME_KPMMMADKMHG_OFFSET))(this, FKDONKGGAIF);
	}
};
