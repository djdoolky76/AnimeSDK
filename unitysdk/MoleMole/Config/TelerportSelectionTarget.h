#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/MoleMole/Config/TelerportSelectionTarget_HCPEENMMEBJ.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0x190BE1B0)
#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_FDNCPNFNNLJ_OFFSET UNITYSDK_OFFSET(0x190BEAB0)
#define MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x190BEAA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TelerportSelectionTarget_TypeDefinitionIndex = 85283;

	class TelerportSelectionTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::MoleMole::Config::TeleportSelectionType TeleportType; // 0x40
		::MoleMole::Config::TelerportSelectionTarget_HCPEENMMEBJ HandleType; // 0x44
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* _resolvedTargets; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::MoleMole::Battle::Entity* FDNCPNFNNLJ(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TELERPORTSELECTIONTARGET_FDNCPNFNNLJ_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}
	};
}
