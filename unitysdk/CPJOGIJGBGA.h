#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"
class ADLOAGJAOAN;
class CPJOGIJGBGA;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPJOGIJGBGA_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xDCD19F0)
#define CPJOGIJGBGA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xDCD1980)
#define CPJOGIJGBGA_CLEAR_OFFSET UNITYSDK_OFFSET(0xDCD1AE0)
#define CPJOGIJGBGA_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0xDCD1EA0)
#define CPJOGIJGBGA_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xDCD1C50)
#define CPJOGIJGBGA_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0xDCD2190)
#define CPJOGIJGBGA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD1B80)
#define CPJOGIJGBGA_DDOPFCBNHGH_OFFSET UNITYSDK_OFFSET(0xDCD1BE0)

inline static constexpr unsigned int CPJOGIJGBGA_TypeDefinitionIndex = 65113;

	class CPJOGIJGBGA : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FKDGHBECDCI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_CTOR_OFFSET))(this);
		}

		static ::CPJOGIJGBGA* ACMKLFOMPFC()
		{
			return ((::CPJOGIJGBGA*(*)())((::PBYTE)hIl2Cpp + CPJOGIJGBGA_ACMKLFOMPFC_OFFSET))();
		}

		static ::CPJOGIJGBGA* ACMKLFOMPFC_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::CPJOGIJGBGA*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_ACMKLFOMPFC_1_OFFSET))(a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_CLEAR_OFFSET))(this);
		}

		::CPJOGIJGBGA* DDOPFCBNHGH(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::CPJOGIJGBGA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_DDOPFCBNHGH_OFFSET))(this, a1);
		}

		::ADLOAGJAOAN* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::ADLOAGJAOAN*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_CREATEEQUIPITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CPJOGIJGBGA_CREATETRAITS_OFFSET))(this, a1);
		}

	};
