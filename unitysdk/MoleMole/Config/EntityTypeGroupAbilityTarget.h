#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CommonAbilityTarget.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MGHNAPKHBOG.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_CDLHJGNHMIM_OFFSET UNITYSDK_OFFSET(0xFACDCE0)
#define MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0xFACD940)
#define MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFACDC50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityTypeGroupAbilityTarget_TypeDefinitionIndex = 73536;

	class EntityTypeGroupAbilityTarget : public ::MoleMole::Config::CommonAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::EntityType>* entityTypeGroup; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* CDLHJGNHMIM(::MoleMole::Battle::Entity* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* DDMDINPGCFI, ::System::UInt32 CEIDLKIHMLC)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEGROUPABILITYTARGET_CDLHJGNHMIM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}
	};
}
