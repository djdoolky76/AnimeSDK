#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
class CJLEJIGIKOF;
class HNPHLAHJPOB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD10A270)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xD109E60)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xD109E80)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_PENDINGBRANCH_OFFSET UNITYSDK_OFFSET(0xD10A060)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_REFRESHBRANCH_OFFSET UNITYSDK_OFFSET(0xD10A0B0)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SELECTBRANCH_OFFSET UNITYSDK_OFFSET(0xD109FA0)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xD109E70)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xD109E90)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xD109F30)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xD109EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEliteBranchSelectAction_TypeDefinitionIndex = 65052;

	class GridFightEliteBranchSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OptionIDList; // 0x18
		::System::UInt32 _RefreshTimes_k__BackingField; // 0x20
		::System::UInt32 PendingOptionPos; // 0x24
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_MAXREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_MAXREFRESHTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_REFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_REFRESHTIMES_OFFSET))(this, a1);
		}

		::System::Void Sync(::HNPHLAHJPOB* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HNPHLAHJPOB*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void SelectBranch(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SELECTBRANCH_OFFSET))(this, a1);
		}

		::System::Void PendingBranch(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_PENDINGBRANCH_OFFSET))(this, a1);
		}

		::System::Void RefreshBranch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_REFRESHBRANCH_OFFSET))(this);
		}

	};
}
