#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDBE02C0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0xDBDF830)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDBDE800)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETCURACTIVATEDREMARKDESC_OFFSET UNITYSDK_OFFSET(0xDBE0D70)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0xDBE0320)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETFRONTREMARKTEXT_OFFSET UNITYSDK_OFFSET(0xDBE1010)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xDBDF4B0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xDBDF630)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_EFFTYPE_OFFSET UNITYSDK_OFFSET(0xDBDE810)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_LINKROLES_OFFSET UNITYSDK_OFFSET(0xDBE0950)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_LINKUIDS_OFFSET UNITYSDK_OFFSET(0xDBDEAB0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xDBE0910)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_HIDEMEMBERLINKEFFECTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xDBDEC60)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDBDE860)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_PLAYROLETRAITEFFECTS_OFFSET UNITYSDK_OFFSET(0xDBDF210)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0xDBE04A0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_TRYREFRESHLINKEFFECT_OFFSET UNITYSDK_OFFSET(0xDBDE980)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__CANSHOWMEMBERLINKEFFECT_OFFSET UNITYSDK_OFFSET(0xDBDECD0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__GETMEMBERSONBOARDAFFECTED_OFFSET UNITYSDK_OFFSET(0xDBDF9F0)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__ISROWRELATEDTOROLEOREQUIP_OFFSET UNITYSDK_OFFSET(0xDBE1A70)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__TRYREFRESHLINKEFFECT_OFFSET UNITYSDK_OFFSET(0xDBDEB70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberLinkTraitEffect_TypeDefinitionIndex = 67257;

	class GridFightMemberLinkTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::MGBHKCMHDOK* _Proto; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitEffectEffType get_EffType()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_EFFTYPE_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void TryRefreshLinkEffect(::RPG::Client::GridFightEffectController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEffectController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_TRYREFRESHLINKEFFECT_OFFSET))(this, a1);
		}

		::System::Void HideMemberLinkEffectImmediate(::RPG::Client::GridFightEffectController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEffectController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_HIDEMEMBERLINKEFFECTIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Void _TryRefreshLinkEffect(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::Client::GridFightEffectController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::GridFightEffectController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__TRYREFRESHLINKEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayRoleTraitEffects(::RPG::Client::GridFightEffectController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEffectController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_PLAYROLETRAITEFFECTS_OFFSET))(this, a1);
		}

		::System::Boolean _CanShowMemberLinkEffect(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__CANSHOWMEMBERLINKEFFECT_OFFSET))(this, a1);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _GetMembersOnBoardAffected()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__GETMEMBERSONBOARDAFFECTED_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LinkUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_LINKUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_LinkRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GET_LINKROLES_OFFSET))(this);
		}

		::System::String* GetCurActivatedRemarkDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETCURACTIVATEDREMARKDESC_OFFSET))(this);
		}

		::System::String* GetFrontRemarkText(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT_GETFRONTREMARKTEXT_OFFSET))(this, a1);
		}

		::System::Boolean _IsRowRelatedToRoleOrEquip(::RPG::GameCore::GridFightTraitRemarkRow* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkRow*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT__ISROWRELATEDTOROLEOREQUIP_OFFSET))(this, a1, a2, a3);
		}

	};
}
