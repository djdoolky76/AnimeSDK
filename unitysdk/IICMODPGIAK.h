#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"
class ADLOAGJAOAN;
class CDEAABODKCP;
class IICMODPGIAK;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IICMODPGIAK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x16437520)
#define IICMODPGIAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x164376E0)
#define IICMODPGIAK_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x164377C0)
#define IICMODPGIAK_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x16437770)
#define IICMODPGIAK_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x16437DC0)
#define IICMODPGIAK_CTOR_OFFSET UNITYSDK_OFFSET(0x16437E60)

	class IICMODPGIAK : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
	{
	public:
		::CDEAABODKCP* AFNDIELNJDJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICMODPGIAK_CTOR_OFFSET))(this);
		}

		static ::IICMODPGIAK* ACMKLFOMPFC(::CDEAABODKCP* a1)
		{
			return ((::IICMODPGIAK*(*)(::CDEAABODKCP*))((::PBYTE)hIl2Cpp + IICMODPGIAK_ACMKLFOMPFC_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICMODPGIAK_CLEAR_OFFSET))(this);
		}

		::ADLOAGJAOAN* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::ADLOAGJAOAN*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + IICMODPGIAK_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + IICMODPGIAK_CREATEEQUIPITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + IICMODPGIAK_CREATETRAITS_OFFSET))(this, a1);
		}

	};
