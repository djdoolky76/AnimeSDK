#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
namespace RPG::Client { class GridFightChimeraSelectGoods; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA8F0D0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDA8F080)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_CANREROLL_OFFSET UNITYSDK_OFFSET(0xDA8FEB0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_GOODS_OFFSET UNITYSDK_OFFSET(0xDA90180)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_NEEDSWAITEFFECTBEFORESTART_OFFSET UNITYSDK_OFFSET(0xDA8FF80)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_REROLLCNT_OFFSET UNITYSDK_OFFSET(0xDA8FE10)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xDA8FFC0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0xDA8FD70)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xDA8FCD0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0xDA8F8B0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_RESHOWDIALOG_OFFSET UNITYSDK_OFFSET(0xDA8FAD0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0xDA8F790)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA8F640)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDA8FBD0)
#define RPG_CLIENT_GRIDFIGHTCHIMERASELECTACTION__UPDATECANDIDATES_OFFSET UNITYSDK_OFFSET(0xDA8F130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraSelectAction_TypeDefinitionIndex = 66692;

	class GridFightChimeraSelectAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::RPG::Client::LuaUIController* _HandleUI; // 0x20
		::CHCHAJIANIM* _Proto; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimeraSelectGoods*>* _Goods_k__BackingField; // 0x30
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
