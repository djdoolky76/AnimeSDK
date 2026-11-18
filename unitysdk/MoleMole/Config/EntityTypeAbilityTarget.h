#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CommonAbilityTarget.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_BKKPLGJLKLE_OFFSET UNITYSDK_OFFSET(0x1C6E04E0)
#define MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_DGKIALPKGNF_OFFSET UNITYSDK_OFFSET(0x1C6E0630)
#define MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E0620)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityTypeAbilityTarget_TypeDefinitionIndex = 45288;

	class EntityTypeAbilityTarget : public ::MoleMole::Config::CommonAbilityTarget
	{
	public:
		::MoleMole::Config::EntityType entityType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean BKKPLGJLKLE(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& HBPANNDINGD)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_BKKPLGJLKLE_OFFSET))(this, GDIJDKDIAAD, HBPANNDINGD);
		}

		::System::Boolean DGKIALPKGNF(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& KMGKAIDEIBA)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYTYPEABILITYTARGET_DGKIALPKGNF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
