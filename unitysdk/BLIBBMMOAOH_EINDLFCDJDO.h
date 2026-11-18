#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_GMEBFGMDANA.h"
#include "unitysdk/System/Object.h"

class BLIBBMMOAOH;
namespace MoleMole::Battle { class Entity; }

#define BLIBBMMOAOH_EINDLFCDJDO_MNEAKIMCFKG_OFFSET UNITYSDK_OFFSET(0x11519E00)
#define BLIBBMMOAOH_EINDLFCDJDO__CTOR_OFFSET UNITYSDK_OFFSET(0x11519DF0)

inline static constexpr unsigned int BLIBBMMOAOH_EINDLFCDJDO_TypeDefinitionIndex = 74177;

class BLIBBMMOAOH_EINDLFCDJDO : public ::System::Object
{
public:
	::BLIBBMMOAOH* KLHPEBKNIFB; // 0x10
	::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_EINDLFCDJDO__CTOR_OFFSET))(this);
	}

	::System::Boolean MNEAKIMCFKG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLIBBMMOAOH_EINDLFCDJDO_MNEAKIMCFKG_OFFSET))(this, KECKGDFIALJ);
	}
};
