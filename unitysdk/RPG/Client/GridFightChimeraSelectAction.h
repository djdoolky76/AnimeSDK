#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
namespace RPG::Client { class GridFightChimeraSelectGoods; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58DB80)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0x1D58DB30)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0x1D58E960)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x1D58EC30)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_NEEDSWAITEFFECTBEFORESTART_OFFSET UNITYSDK_OFFSET(0x1D58EA30)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_REROLLCNT_OFFSET UNITYSDK_OFFSET(0x1D58E8C0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1D58EA70)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D58E820)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1D58E780)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0x1D58E360)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_RESHOWDIALOG_OFFSET UNITYSDK_OFFSET(0x1D58E580)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1D58E240)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D58E0F0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0x1D58E680)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION__UPDATECANDIDATES_OFFSET UNITYSDK_OFFSET(0x1D58DBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraSelectAction_TypeDefinitionIndex = 66692;

	class GridFightChimeraSelectAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimeraSelectGoods*>* _Goods_k__BackingField; // 0x20
		::RPG::Client::LuaUIController* _HandleUI; // 0x28
		::CHCHAJIANIM* _Proto; // 0x30
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateCandidates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION__UPDATECANDIDATES_OFFSET))(this);
		}

		::System::Void SelectIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_SELECTINDEX_OFFSET))(this, a1);
		}

		::System::Void Reroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_REROLL_OFFSET))(this);
		}

		::System::Void ReshowDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_RESHOWDIALOG_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION__ONSTART_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_TraitEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITEFFECTID_OFFSET))(this);
		}

		::System::UInt32 get_RerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_REROLLCNT_OFFSET))(this);
		}

		::System::Boolean get_CanReroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_CANREROLL_OFFSET))(this);
		}

		::System::Boolean get_NeedsWaitEffectBeforeStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_NEEDSWAITEFFECTBEFORESTART_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfig* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimeraSelectGoods*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightChimeraSelectGoods*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_GOODS_OFFSET))(this);
		}

	};
}
