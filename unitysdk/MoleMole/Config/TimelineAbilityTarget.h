#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0x118E52F0)
#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_KIEFPNDJOGM_OFFSET UNITYSDK_OFFSET(0x118E5980)
#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x118E59E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimelineAbilityTarget_TypeDefinitionIndex = 83435;

	class TimelineAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* resultList; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* selectList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::System::Boolean KIEFPNDJOGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_KIEFPNDJOGM_OFFSET))(this);
		}
	};
}
