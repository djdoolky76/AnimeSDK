#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"
class ADLOAGJAOAN;
class AINLHDFJGBJ;
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AINLHDFJGBJ_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x12CAD080)
#define AINLHDFJGBJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x12CAD100)
#define AINLHDFJGBJ_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12CAD470)
#define AINLHDFJGBJ_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x12CAD670)
#define AINLHDFJGBJ_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x12CAD1A0)
#define AINLHDFJGBJ_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12CAD3E0)
#define AINLHDFJGBJ_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x12CAD710)
#define AINLHDFJGBJ_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12CAD570)
#define AINLHDFJGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CAD190)

	class AINLHDFJGBJ : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
	{
	public:
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CTOR_OFFSET))(this);
		}

		static ::AINLHDFJGBJ* ACMKLFOMPFC(::NDPFOOJIAIJ* a1)
		{
			return ((::AINLHDFJGBJ*(*)(::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_ACMKLFOMPFC_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CLEAR_OFFSET))(this);
		}

		::ADLOAGJAOAN* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::ADLOAGJAOAN*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CREATETRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CREATEVALUECOMPONENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CREATEEQUIPITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + AINLHDFJGBJ_CREATETRAITS_OFFSET))(this, a1);
		}

	};
