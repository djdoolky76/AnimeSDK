#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadLinkModule; }

#define MOLEMOLE_MONOGAMEPADLINKMODULE_EAFGGIGHBFB_NOMPJNICLKA_OFFSET UNITYSDK_OFFSET(0x16273A30)
#define MOLEMOLE_MONOGAMEPADLINKMODULE_EAFGGIGHBFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16273A20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadLinkModule_EAFGGIGHBFB_TypeDefinitionIndex = 68056;

	class MonoGamepadLinkModule_EAFGGIGHBFB : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadLinkModule* KLHPEBKNIFB; // 0x10
		::System::Single BGNBOCLIONH; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE_EAFGGIGHBFB__CTOR_OFFSET))(this);
		}

		::System::Int32 NOMPJNICLKA(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE_EAFGGIGHBFB_NOMPJNICLKA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
