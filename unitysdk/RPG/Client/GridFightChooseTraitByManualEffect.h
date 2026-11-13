#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightChooseTraitByManualAction; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D590A60)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0x1D5909C0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5900C0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0x1D590AC0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1D5912E0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_CANDIDATETRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D591330)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x1D591310)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_SELECTEDTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D591300)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1D5908D0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D590130)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1D58FF30)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_SELECTTRAIT_OFFSET UNITYSDK_OFFSET(0x1D590960)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1D5912F0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x1D591320)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0x1D590B30)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT__GETCANDIDATELAYERPARAMS_OFFSET UNITYSDK_OFFSET(0x1D5910B0)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT__GETCANDIDATETRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D590F80)
#define RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT__TRYUPDATEROLETRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D5902D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChooseTraitByManualEffect_TypeDefinitionIndex = 67204;

	class GridFightChooseTraitByManualEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedTraitIDs_k__BackingField; // 0x30
		::RPG::Client::GridFightChooseTraitByManualAction* _Action_k__BackingField; // 0x38
		::System::UInt32 _RoleID_k__BackingField; // 0x40
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _TryUpdateRoleTraitIDs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT__TRYUPDATEROLETRAITIDS_OFFSET))(this, a1);
		}

		::System::Void SelectTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_SELECTTRAIT_OFFSET))(this, a1);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightChooseTraitByManualAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightChooseTraitByManualAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_REGISTERACTION_OFFSET))(this, a1);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetCandidateTraitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT__GETCANDIDATETRAITIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* _GetCandidateLayerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT__GETCANDIDATELAYERPARAMS_OFFSET))(this);
		}

		::RPG::Client::GridFightChooseTraitByManualAction* get_Action()
		{
			return ((::RPG::Client::GridFightChooseTraitByManualAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightChooseTraitByManualAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightChooseTraitByManualAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedTraitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_SELECTEDTRAITIDS_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_ROLEID_OFFSET))(this);
		}

		::System::Void set_RoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_SET_ROLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CandidateTraitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHOOSETRAITBYMANUALEFFECT_GET_CANDIDATETRAITIDS_OFFSET))(this);
		}

	};
}
