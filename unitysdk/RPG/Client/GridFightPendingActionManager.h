#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHCHAJIANIM;
class CJLEJIGIKOF;
namespace RPG::Client { class GridFightPetPalEffect; }
namespace RPG::Client { class GridFightPreparationPendingAction; }
namespace RPG::Client { class GridFightPresentationSetupContext; }
namespace RPG::Client { class GridFightProtoPendingAction; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E430)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_FINISHLOCALELITEBRANCHEDITACTION_OFFSET UNITYSDK_OFFSET(0x1DF1C110)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_FINISHPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x1DF1CC60)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_HASPENDINGAHAULTRABLOCK_OFFSET UNITYSDK_OFFSET(0x1DF1C240)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_ISTOPRETURNPREPARATION_OFFSET UNITYSDK_OFFSET(0x1DF1E200)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_ISTOPROUNDBEGIN_OFFSET UNITYSDK_OFFSET(0x1DF1E0C0)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_PRESENTATIONSETUP_OFFSET UNITYSDK_OFFSET(0x1DF1E340)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_TOPACTION_OFFSET UNITYSDK_OFFSET(0x1DF1C1B0)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET__PROTOACTIONS_OFFSET UNITYSDK_OFFSET(0x1DF1CB80)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_INSERTACTION_OFFSET UNITYSDK_OFFSET(0x1DF1B950)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1DF1D980)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_ONHANDLERSP_OFFSET UNITYSDK_OFFSET(0x1DF1D2D0)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_REVEALPETPALEFFECT_OFFSET UNITYSDK_OFFSET(0x1DF1B750)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_STARTELITEBRANCHEDITACTION_OFFSET UNITYSDK_OFFSET(0x1DF1BF10)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x1DF1C440)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_TRYENQUEUEEQUIPTRACKGUIDESELECTACTION_OFFSET UNITYSDK_OFFSET(0x1DF1BB90)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER__NOTIFYIFTOPACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1DF1E050)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER__ONACTIONFINISHED_OFFSET UNITYSDK_OFFSET(0x1DF1E350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingActionManager_TypeDefinitionIndex = 66708;

	class GridFightPendingActionManager : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPresentationSetupContext* _PresentationSetup_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPreparationPendingAction*>* _ActionQueue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void RevealPetPalEffect(::RPG::Client::GridFightPetPalEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_REVEALPETPALEFFECT_OFFSET))(this, a1);
		}

		::System::Void TryEnqueueEquipTrackGuideSelectAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_TRYENQUEUEEQUIPTRACKGUIDESELECTACTION_OFFSET))(this);
		}

		::System::Void StartEliteBranchEditAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_STARTELITEBRANCHEDITACTION_OFFSET))(this);
		}

		::System::Void FinishLocalEliteBranchEditAction(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_FINISHLOCALELITEBRANCHEDITACTION_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPreparationPendingAction* get_TopAction()
		{
			return ((::RPG::Client::GridFightPreparationPendingAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_TOPACTION_OFFSET))(this);
		}

		::System::Boolean get_HasPendingAhaUltraBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_HASPENDINGAHAULTRABLOCK_OFFSET))(this);
		}

		::System::Void Sync(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void FinishPendingAction(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_FINISHPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Void OnHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_ONHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void InsertAction(::RPG::Client::GridFightPreparationPendingAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPreparationPendingAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_INSERTACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTopRoundBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_ISTOPROUNDBEGIN_OFFSET))(this);
		}

		::System::Boolean get_IsTopReturnPreparation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_ISTOPRETURNPREPARATION_OFFSET))(this);
		}

		::RPG::Client::GridFightPresentationSetupContext* get_PresentationSetup()
		{
			return ((::RPG::Client::GridFightPresentationSetupContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET_PRESENTATIONSETUP_OFFSET))(this);
		}

		::System::Void _OnActionFinished(::RPG::Client::GridFightPreparationPendingAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPreparationPendingAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER__ONACTIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _NotifyIfTopActionChanged(::RPG::Client::GridFightPreparationPendingAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPreparationPendingAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER__NOTIFYIFTOPACTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProtoPendingAction*>* get__protoActions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProtoPendingAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER_GET__PROTOACTIONS_OFFSET))(this);
		}

	};
}
