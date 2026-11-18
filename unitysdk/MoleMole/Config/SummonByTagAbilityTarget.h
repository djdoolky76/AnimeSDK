#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/MoleMole/Config/SummonByTagAbilityTarget_PFLOMEAOOGO.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_DOKGDMLBAKD_OFFSET UNITYSDK_OFFSET(0x1C6F25E0)
#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0x1C6F18B0)
#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_FEHJGECAMIN_OFFSET UNITYSDK_OFFSET(0x1C6F2340)
#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F2580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummonByTagAbilityTarget_TypeDefinitionIndex = 91272;

	class SummonByTagAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SummonTag; // 0x40
		::MoleMole::Config::SummonByTagAbilityTarget_PFLOMEAOOGO SelectKind; // 0x48
		::System::Boolean IsSelfSummoner; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* findList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::System::Boolean FEHJGECAMIN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Battle::Entity* JHGPEHNCJID)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_FEHJGECAMIN_OFFSET))(this, KECKGDFIALJ, JHGPEHNCJID);
		}

		::System::Int32 DOKGDMLBAKD(::MoleMole::Battle::Entity* EJCBEJMGFAJ, ::MoleMole::Battle::Entity* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_DOKGDMLBAKD_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
