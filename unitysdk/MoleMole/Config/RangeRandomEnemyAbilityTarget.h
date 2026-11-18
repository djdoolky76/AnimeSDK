#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0xFAD73B0)
#define MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_HLJGCFGMEBA_OFFSET UNITYSDK_OFFSET(0xFAD7BA0)
#define MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD7D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RangeRandomEnemyAbilityTarget_TypeDefinitionIndex = 41034;

	class RangeRandomEnemyAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Single raidus; // 0x40
		::System::Int32 searchCount; // 0x44
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* findList; // 0x48
		::System::Single sqrRaidus; // 0x50
		::UnityEngine::Vector3 choosePos; // 0x54
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* allFeatureTargetList; // 0x60
		::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* entityFeatureTargetCache; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::System::Single HLJGCFGMEBA(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGERANDOMENEMYABILITYTARGET_HLJGCFGMEBA_OFFSET))(this, HOLFNDIMGJJ);
		}
	};
}
