#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class CEEGMMCFCBG;
class DILIKOIGENM;
class IGIEOGBNLAC;
class IIHJNOMNIEC;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderRequirementViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x1E9189C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0x1E9188C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E918B80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1E9184D0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1E918670)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1E9185C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_NAVIGATECOMMAND_OFFSET UNITYSDK_OFFSET(0x1E918800)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1E918570)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0x1E918530)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIRENEWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1E918720)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REWARDCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E9184F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0x1E918740)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARCNT_OFFSET UNITYSDK_OFFSET(0x1E918550)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARS_OFFSET UNITYSDK_OFFSET(0x1E918510)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x1E918A40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0x1E918940)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1E9184E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1E9186B0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1E918600)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIREMENT_OFFSET UNITYSDK_OFFSET(0x1E918540)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIRENEWUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x1E918730)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REWARDCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E918500)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARCNT_OFFSET UNITYSDK_OFFSET(0x1E918560)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARS_OFFSET UNITYSDK_OFFSET(0x1E918520)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONNAVIGATE_OFFSET UNITYSDK_OFFSET(0x1E918B20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONSELECT_OFFSET UNITYSDK_OFFSET(0x1E918AC0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderItemViewModel_TypeDefinitionIndex = 82451;

	class MechCraftOrderItemViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnNavigateRequested; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* _Actor_k__BackingField; // 0x20
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* _Requirement_k__BackingField; // 0x28
		::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnSelectRequested; // 0x30
		::Sofa::Core::SimpleCommand* _NavigateCommand; // 0x38
		::IGIEOGBNLAC* Model; // 0x40
		::DILIKOIGENM* _RewardCurrency_k__BackingField; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::IIHJNOMNIEC*>* _Stars_k__BackingField; // 0x50
		::Sofa::Core::SimpleCommand* _SelectCommand; // 0x58
		::System::UInt32 _StarCnt_k__BackingField; // 0x60
		::System::Boolean _RequireNewUnlockAnim_k__BackingField; // 0x64
		::System::Boolean _IsNew; // 0x65
		::System::Boolean _IsSelected; // 0x66
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* get_Actor()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ACTOR_OFFSET))(this, a1);
		}

		::DILIKOIGENM* get_RewardCurrency()
		{
			return ((::DILIKOIGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REWARDCURRENCY_OFFSET))(this);
		}

		::System::Void set_RewardCurrency(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REWARDCURRENCY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IIHJNOMNIEC*>* get_Stars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IIHJNOMNIEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARS_OFFSET))(this);
		}

		::System::Void set_Stars(::System::Collections::Generic::IReadOnlyList_1<::IIHJNOMNIEC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::IIHJNOMNIEC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARS_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* get_Requirement()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIREMENT_OFFSET))(this);
		}

		::System::Void set_Requirement(::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderRequirementViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIREMENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_STARCNT_OFFSET))(this);
		}

		::System::Void set_StarCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_STARCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ORDERID_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireNewUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_REQUIRENEWUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_RequireNewUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_SET_REQUIRENEWUNLOCKANIM_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_SelectCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_SELECTCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_NavigateCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_GET_NAVIGATECOMMAND_OFFSET))(this);
		}

		::System::Void add_OnSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONSELECTREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONSELECTREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_OnNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_ADD_ONNAVIGATEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL_REMOVE_ONNAVIGATEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void _OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONSELECT_OFFSET))(this);
		}

		::System::Void _OnNavigate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERITEMVIEWMODEL__ONNAVIGATE_OFFSET))(this);
		}

	};
}
