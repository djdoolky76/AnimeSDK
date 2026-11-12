#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBattleResultBonus; }
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightBonusResultData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_CONTAINSPENDINGORB_OFFSET UNITYSDK_OFFSET(0xDC39B00)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC206A0)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_ELITECONSUMABLESTOHIDE_OFFSET UNITYSDK_OFFSET(0xDC39AE0)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_LEVELADDFORBOARDPREP_OFFSET UNITYSDK_OFFSET(0xDC39AA0)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_NEEDSBATTLERETURNSETUP_OFFSET UNITYSDK_OFFSET(0xDC39A60)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_NEEDSBOARDLEVELPREP_OFFSET UNITYSDK_OFFSET(0xDC39A80)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_NEEDSPROGRESSBARPREP_OFFSET UNITYSDK_OFFSET(0xDC39AC0)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_PENDINGORBUIDS_OFFSET UNITYSDK_OFFSET(0xDC39AF0)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_MERGEBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xDC39B60)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_MERGEELITEBONUS_OFFSET UNITYSDK_OFFSET(0xDC39C90)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_REMOVEPENDINGORBSFROMBONUS_OFFSET UNITYSDK_OFFSET(0xDC3A340)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_REMOVEPENDINGORBS_OFFSET UNITYSDK_OFFSET(0xDC39E90)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xDC20F30)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_LEVELADDFORBOARDPREP_OFFSET UNITYSDK_OFFSET(0xDC39AB0)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_NEEDSBATTLERETURNSETUP_OFFSET UNITYSDK_OFFSET(0xDC39A70)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_NEEDSBOARDLEVELPREP_OFFSET UNITYSDK_OFFSET(0xDC39A90)
#define RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_NEEDSPROGRESSBARPREP_OFFSET UNITYSDK_OFFSET(0xDC39AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentationSetupContext_TypeDefinitionIndex = 66771;

	class GridFightPresentationSetupContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>* _EliteConsumablesToHide_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PendingOrbUIDs_k__BackingField; // 0x18
		::System::Int32 _LevelAddForBoardPrep_k__BackingField; // 0x20
		::System::Boolean _NeedsBattleReturnSetup_k__BackingField; // 0x24
		::System::Boolean _NeedsProgressBarPrep_k__BackingField; // 0x25
		::System::Boolean _NeedsBoardLevelPrep_k__BackingField; // 0x26
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedsBattleReturnSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_NEEDSBATTLERETURNSETUP_OFFSET))(this);
		}

		::System::Void set_NeedsBattleReturnSetup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_NEEDSBATTLERETURNSETUP_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedsBoardLevelPrep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_NEEDSBOARDLEVELPREP_OFFSET))(this);
		}

		::System::Void set_NeedsBoardLevelPrep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_NEEDSBOARDLEVELPREP_OFFSET))(this, a1);
		}

		::System::Int32 get_LevelAddForBoardPrep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_LEVELADDFORBOARDPREP_OFFSET))(this);
		}

		::System::Void set_LevelAddForBoardPrep(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_LEVELADDFORBOARDPREP_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedsProgressBarPrep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_NEEDSPROGRESSBARPREP_OFFSET))(this);
		}

		::System::Void set_NeedsProgressBarPrep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_SET_NEEDSPROGRESSBARPREP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>* get_EliteConsumablesToHide()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_ELITECONSUMABLESTOHIDE_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PendingOrbUIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_GET_PENDINGORBUIDS_OFFSET))(this);
		}

		::System::Boolean ContainsPendingOrb(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_CONTAINSPENDINGORB_OFFSET))(this, a1);
		}

		::System::Void MergeBattleResult(::RPG::Client::GridFightBattleResultBonus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleResultBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_MERGEBATTLERESULT_OFFSET))(this, a1);
		}

		::System::Void MergeEliteBonus(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_MERGEELITEBONUS_OFFSET))(this, a1);
		}

		::System::Void RemovePendingOrbs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_REMOVEPENDINGORBS_OFFSET))(this, a1);
		}

		::System::Void RemovePendingOrbsFromBonus(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_REMOVEPENDINGORBSFROMBONUS_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTATIONSETUPCONTEXT_RESET_OFFSET))(this);
		}

	};
}
