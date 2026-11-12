#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightPartnerChooseAction; }
namespace RPG::Client { class GridFightPartnerOption; }
namespace RPG::Client { class GridFightPartnerTraitEffect; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::GameCore { class GridFightRoleChooseRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDC1C570)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0xDC1C3A0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC1D380)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_COPYEFFECTWITHOVERRIDEEQUIPID_OFFSET UNITYSDK_OFFSET(0xDC1B030)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC1ABA0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETCHOOSEROWBYROLE_OFFSET UNITYSDK_OFFSET(0xDC1A510)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETCOPYEQUIPDATA_1_OFFSET UNITYSDK_OFFSET(0xDC1A390)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETCOPYEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xDC1C8F0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0xDC1C600)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xDC1C680)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xDC1C750)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_BONUSTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC1BE70)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_BONUSTRAITS_OFFSET UNITYSDK_OFFSET(0xDC1C080)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CHOOSEDROLE_OFFSET UNITYSDK_OFFSET(0xDC1B630)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CHOOSEROLEUID_OFFSET UNITYSDK_OFFSET(0xDC1BE30)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CURPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xDC1C9D0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xDC1BA60)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_EFFTYPE_OFFSET UNITYSDK_OFFSET(0xDC1AFE0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_ENHANCETRAITID_OFFSET UNITYSDK_OFFSET(0xDC1D080)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_EQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xDC1C2E0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_INPENDING_OFFSET UNITYSDK_OFFSET(0xDC1C9F0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0xDC1B9E0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_LASTCHOOSEROLEUID_OFFSET UNITYSDK_OFFSET(0xDC1BE50)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xDC1B1C0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_ROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0xDC1C400)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_SUBTRAITEFFECTS_OFFSET UNITYSDK_OFFSET(0xDC1B200)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDC1B290)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_REGISTERPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xDC1C980)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SELECTPARTNER_OFFSET UNITYSDK_OFFSET(0xDC1D120)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SET_CHOOSEROLEUID_OFFSET UNITYSDK_OFFSET(0xDC1BE40)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SET_CURPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xDC1C9E0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SET_LASTCHOOSEROLEUID_OFFSET UNITYSDK_OFFSET(0xDC1BE60)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0xDC1CE50)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__GETCURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xDC1BAB0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__GETCURROLEOPTIONSFROMTEAM_OFFSET UNITYSDK_OFFSET(0xDC1CA50)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__GET_BONUSTRAITS_B__27_1_OFFSET UNITYSDK_OFFSET(0xDC1D4A0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__INITROLECHOOSECONFIGCACHE_OFFSET UNITYSDK_OFFSET(0xDC1AC20)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xDC1B8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerTraitEffect_TypeDefinitionIndex = 67262;

	class GridFightPartnerTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightPartnerChooseAction* _CurPendingAction_k__BackingField; // 0x30
		::RPG::Client::GridFightEquipItemConfig* _OverrideEquipItemConfig; // 0x38
		::System::UInt32 _LastChooseRoleUID_k__BackingField; // 0x40
		::System::UInt32 _ChooseRoleUID_k__BackingField; // 0x44
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightRoleChooseRow*>** StaticGet__RoleChooseRowByRoleID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightRoleChooseRow*>**)UnitySDK::FromName("RPG.Client", "GridFightPartnerTraitEffect")->GetStaticField(0x72F40);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightRoleChooseRow*>** StaticGet__RoleChooseRowByEquipID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightRoleChooseRow*>**)UnitySDK::FromName("RPG.Client", "GridFightPartnerTraitEffect")->GetStaticField(0x72F48);
		}

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightTraitEffectEffType get_EffType()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_EFFTYPE_OFFSET))(this);
		}

		::RPG::Client::GridFightPartnerTraitEffect* CopyEffectWithOverrideEquipID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPartnerTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_COPYEFFECTWITHOVERRIDEEQUIPID_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>* get_SubTraitEffects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_SUBTRAITEFFECTS_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* get_CurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_ChooseRoleUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CHOOSEROLEUID_OFFSET))(this);
		}

		::System::Void set_ChooseRoleUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SET_CHOOSEROLEUID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastChooseRoleUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_LASTCHOOSEROLEUID_OFFSET))(this);
		}

		::System::Void set_LastChooseRoleUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SET_LASTCHOOSEROLEUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_ChoosedRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CHOOSEDROLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_BonusTraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_BONUSTRAITCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_BonusTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_BONUSTRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_EQUIPCONFIG_OFFSET))(this);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetCopyEquipData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETCOPYEQUIPDATA_OFFSET))(this);
		}

		static ::RPG::Client::GridFightEquipItemData* GetCopyEquipData_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETCOPYEQUIPDATA_1_OFFSET))(a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetCurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__GETCURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		static ::RPG::GameCore::GridFightRoleChooseRow* GetChooseRowByRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::GameCore::GridFightRoleChooseRow*(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GETCHOOSEROWBYROLE_OFFSET))(a1);
		}

		::System::Void RegisterPendingAction(::RPG::Client::GridFightPartnerChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPartnerChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_REGISTERPENDINGACTION_OFFSET))(this, a1);
		}

		static ::System::Void _InitRoleChooseConfigCache(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__INITROLECHOOSECONFIGCACHE_OFFSET))(a1);
		}

		::RPG::Client::GridFightPartnerChooseAction* get_CurPendingAction()
		{
			return ((::RPG::Client::GridFightPartnerChooseAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_CURPENDINGACTION_OFFSET))(this);
		}

		::System::Void set_CurPendingAction(::RPG::Client::GridFightPartnerChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPartnerChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SET_CURPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_InPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_INPENDING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPartnerOption*>* get_RoleOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPartnerOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_ROLEOPTIONS_OFFSET))(this);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::UInt32 get_EnhanceTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_GET_ENHANCETRAITID_OFFSET))(this);
		}

		::System::Void SelectPartner(::System::Int32 a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT_SELECTPARTNER_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _GetCurRoleOptionsFromTeam()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__GETCURROLEOPTIONSFROMTEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* _get_BonusTraits_b__27_1(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT__GET_BONUSTRAITS_B__27_1_OFFSET))(this, a1);
		}

	};
}
