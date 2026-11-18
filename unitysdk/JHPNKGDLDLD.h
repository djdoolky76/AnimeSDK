#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOCEOKKKKOF.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define JHPNKGDLDLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7D2500)
#define JHPNKGDLDLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D2400)
#define JHPNKGDLDLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D2510)
#define JHPNKGDLDLD_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7D2600)
#define JHPNKGDLDLD_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7D2580)

inline static constexpr unsigned int JHPNKGDLDLD_TypeDefinitionIndex = 46409;

struct alignas(4) JHPNKGDLDLD
{
	::MoleMole::EntityHandle CPLFOFKKGGO; // 0x10
	::Foundation::AssetRequestHandle DOGFEALEOHF; // 0x20
	::BOCEOKKKKOF NOOLOILNGPL; // 0x40

	/*
	::System::Boolean Equals(::JHPNKGDLDLD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JHPNKGDLDLD))((::PBYTE)hIl2Cpp + JHPNKGDLDLD_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHPNKGDLDLD_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPNKGDLDLD_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHPNKGDLDLD_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPNKGDLDLD_HLPHPBAODIF_OFFSET))(this);
	}
};
