#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class AEHFALNJDKC;
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitDisplayData; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITIDAFFECTED_OFFSET UNITYSDK_OFFSET(0x1D3EDB80)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET UNITYSDK_OFFSET(0x1D3C8DC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CREATEDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x1D3F04A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EC710)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETEXTRATRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3EE440)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETMODIFIERUNLOCKTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D3F1B30)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETROLECONFIGTRAITDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x1D3F0D20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETROLETRAITDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x1D3F1050)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D3EE060)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYIDAFFECTED_OFFSET UNITYSDK_OFFSET(0x1D3EDDE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x1D3ED9B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3E08E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x1D3F0A40)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITEFFECTBONUSTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3EE390)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1D3F2470)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3F0A90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1D3F24B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_HASEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0x1D3F1A10)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET UNITYSDK_OFFSET(0x1D3EC7F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1D3F24C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x1D3ED1B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__APPLYTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D3ED3C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__GETROLETRAITDISPLAYSORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3F19B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__GETROLETRAITDISPLAYSOURCE_OFFSET UNITYSDK_OFFSET(0x1D3F1770)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__ONTRAITEFFECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D3EE230)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__SNAPSHOTTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D3ED2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent_TypeDefinitionIndex = 67330;

	class GridFightTraitComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PendingTraitIDs; // 0x18
		::NDPFOOJIAIJ* _DataContext; // 0x20
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x28
		::AEHFALNJDKC* _Owner; // 0x30
		::System::Boolean _IsUpdatingTraits; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 _PendingApplyCount; // 0x3C
		// static const ::System::Object _MaxPendingApplyCount; // 0x0
		::System::Void _ctor(::AEHFALNJDKC* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEHFALNJDKC*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InitTraits(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_INITTRAITS_OFFSET))(this, a1);
		}

		::System::Void UpdateTraits(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_UPDATETRAITS_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* _SnapshotTraitIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__SNAPSHOTTRAITIDS_OFFSET))(a1);
		}

		::System::Void _ApplyTraitIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__APPLYTRAITIDS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsTraitID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITID_OFFSET))(this, a1);
		}

		::System::Int32 GetTraitCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsTraitIDAffected(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CONTAINSTRAITIDAFFECTED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByIDAffected(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYIDAFFECTED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* GetTraitByEffectType(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Void _OnTraitEffectChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__ONTRAITEFFECTCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitEffectBonusTraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITEFFECTBONUSTRAITCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetExtraTraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETEXTRATRAITCONFIGS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>* CreateDisplayDatas(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTraitConfigBase*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTraitConfigBase*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_CREATEDISPLAYDATAS_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>* GetTraitDisplayDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETTRAITDISPLAYDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>* GetRoleConfigTraitDisplayDatas(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTraitConfigBase*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTraitConfigBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETROLECONFIGTRAITDISPLAYDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>* GetRoleTraitDisplayDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETROLETRAITDISPLAYDATAS_OFFSET))(this);
		}

		static ::RPG::Client::GridFightRole* _GetRoleTraitDisplaySource(::RPG::Client::GridFightRole* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__GETROLETRAITDISPLAYSOURCE_OFFSET))(a1, a2);
		}

		static ::System::Int32 _GetRoleTraitDisplaySortPriority(::RPG::Client::GridFightTraitDisplayData* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::GridFightTraitDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT__GETROLETRAITDISPLAYSORTPRIORITY_OFFSET))(a1);
		}

		::System::Boolean HasEffectTraitID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_HASEFFECTTRAITID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GetModifierUnlockTraitIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GETMODIFIERUNLOCKTRAITIDS_OFFSET))(this);
		}

		::NDPFOOJIAIJ* get_Context()
		{
			return ((::NDPFOOJIAIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_CONTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableList_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT_SET_TRAITS_OFFSET))(this, a1);
		}

	};
}
