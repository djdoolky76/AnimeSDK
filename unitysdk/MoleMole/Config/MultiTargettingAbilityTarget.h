#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0x192B3D80)
#define MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x192B4260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultiTargettingAbilityTarget_TypeDefinitionIndex = 64028;

	class MultiTargettingAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* abilityTargetKeyList; // 0x40
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* entityList; // 0x48
		::System::Collections::Generic::HashSet_1<::System::UInt32>* tempHashSet; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTITARGETTINGABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}
	};
}
