#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTechTreeRowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTreeRow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D13A520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14AB20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_GETFIRSTREACHNODE_OFFSET UNITYSDK_OFFSET(0x1D14AD00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_GETFIRSTREACHROWINDEX_OFFSET UNITYSDK_OFFSET(0x1D14B260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1D14B590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D13BC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_ISALLNODEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D14B440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_SET_ROWS_OFFSET UNITYSDK_OFFSET(0x1D14B5A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE__DETERMINEROWTYPE_OFFSET UNITYSDK_OFFSET(0x1D14ABA0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTree_TypeDefinitionIndex = 77724;

	class IdleLiveBaseTechTree : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*>* _Rows_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree* Create(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType _DetermineRowType(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE__DETERMINEROWTYPE_OFFSET))(a1, a2);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* GetFirstReachNode()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_GETFIRSTREACHNODE_OFFSET))(this);
		}

		::System::Int32 GetFirstReachRowIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_GETFIRSTREACHROWINDEX_OFFSET))(this);
		}

		::System::Boolean IsAllNodeActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_ISALLNODEACTIVATED_OFFSET))(this);
		}

		::System::Boolean HasAnyIdleLiveTechTreeCanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_HASANYIDLELIVETECHTREECANACTIVATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*>* get_Rows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_GET_ROWS_OFFSET))(this);
		}

		::System::Void set_Rows(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE_SET_ROWS_OFFSET))(this, a1);
		}

	};
}
