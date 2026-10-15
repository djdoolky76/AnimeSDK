#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"
class ADLOAGJAOAN;
class DFBCDLJPNLA;
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DFBCDLJPNLA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xE8222B0)
#define DFBCDLJPNLA_CLEAR_OFFSET UNITYSDK_OFFSET(0xE822330)
#define DFBCDLJPNLA_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE822670)
#define DFBCDLJPNLA_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0xE822770)
#define DFBCDLJPNLA_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xE8223C0)
#define DFBCDLJPNLA_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE8225E0)
#define DFBCDLJPNLA_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0xE822810)
#define DFBCDLJPNLA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8228D0)

	class DFBCDLJPNLA : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
	{
	public:
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CTOR_OFFSET))(this);
		}

		static ::DFBCDLJPNLA* ACMKLFOMPFC(::NDPFOOJIAIJ* a1)
		{
			return ((::DFBCDLJPNLA*(*)(::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_ACMKLFOMPFC_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CLEAR_OFFSET))(this);
		}

		::ADLOAGJAOAN* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::ADLOAGJAOAN*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CREATETRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CREATEEQUIPITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + DFBCDLJPNLA_CREATETRAITS_OFFSET))(this, a1);
		}

	};
