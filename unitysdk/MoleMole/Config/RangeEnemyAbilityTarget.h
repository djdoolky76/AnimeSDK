#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RANGEENEMYABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0xFAD6640)
#define MOLEMOLE_CONFIG_RANGEENEMYABILITYTARGET_HLJGCFGMEBA_OFFSET UNITYSDK_OFFSET(0xFAD7190)
#define MOLEMOLE_CONFIG_RANGEENEMYABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD7300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RangeEnemyAbilityTarget_TypeDefinitionIndex = 91981;

	class RangeEnemyAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Single raidus; // 0x40
		::System::Int32 searchCount; // 0x44
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* findList; // 0x48
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* resultList; // 0x50
		::System::Single sqrRaidus; // 0x58
		::UnityEngine::Vector3 choosePos; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGEENEMYABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGEENEMYABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::System::Single HLJGCFGMEBA(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANGEENEMYABILITYTARGET_HLJGCFGMEBA_OFFSET))(this, HOLFNDIMGJJ);
		}
	};
}
