#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RegionExtension; }

#define INONAJOMCGA_BBBLAAGLFNP_OFFSET UNITYSDK_OFFSET(0x1988AFD0)
#define INONAJOMCGA_EOEEOPJFGOO_OFFSET UNITYSDK_OFFSET(0x1988A550)
#define INONAJOMCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1988A540)

inline static constexpr unsigned int INONAJOMCGA_TypeDefinitionIndex = 68660;

class INONAJOMCGA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INONAJOMCGA__CTOR_OFFSET))(this);
	}

	static ::System::Void EOEEOPJFGOO(::MoleMole::RegionExtension* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + INONAJOMCGA_EOEEOPJFGOO_OFFSET))(JKHIHIBHDPH);
	}

	static ::System::Void BBBLAAGLFNP(::MoleMole::RegionExtension* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::MoleMole::RegionExtension*))((::PBYTE)hIl2Cpp + INONAJOMCGA_BBBLAAGLFNP_OFFSET))(JKHIHIBHDPH);
	}
};
