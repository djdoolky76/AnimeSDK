#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D22C0)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_GET_EQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1D3D26E0)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ISEQUIPAFFECTBYTRAIT_OFFSET UNITYSDK_OFFSET(0x1D3D29A0)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ISEQUIPEXTRADESCACTIVE_OFFSET UNITYSDK_OFFSET(0x1D3D2DC0)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ISEQUIPFROMTRAIT_OFFSET UNITYSDK_OFFSET(0x1D3D2850)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3D2630)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT__CREATETRAITEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D3D3490)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT__GETTRAITEQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1D3D2730)
#define RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT__GETTRAITEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D3D2AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTemplateEquipTraitEffect_TypeDefinitionIndex = 67266;

	class GridFightTemplateEquipTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _EquipUIDs; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_EquipItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_GET_EQUIPITEMDATAS_OFFSET))(this);
		}

		::System::Boolean IsEquipFromTrait(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ISEQUIPFROMTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipAffectByTrait(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ISEQUIPAFFECTBYTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipExtraDescActive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT_ISEQUIPEXTRADESCACTIVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _GetTraitEquipItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT__GETTRAITEQUIPITEMDATAS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _CreateTraitEquipItemData(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT__CREATETRAITEQUIPITEMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _GetTraitEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEMPLATEEQUIPTRAITEFFECT__GETTRAITEQUIPS_OFFSET))(this);
		}

	};
}
