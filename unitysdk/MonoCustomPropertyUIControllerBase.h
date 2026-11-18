#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LGIAHKDMMEE.h"

class DNAELLALHIM;
class HJDNNLKBHBA;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x13C14670)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_BLAKDAPJGPM_OFFSET UNITYSDK_OFFSET(0x13C15D50)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_CLMJHAGKLAK_OFFSET UNITYSDK_OFFSET(0x13C14980)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_COLLECTANIMATIONS_OFFSET UNITYSDK_OFFSET(0x13C152F0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONCANVASWILLRENDER_OFFSET UNITYSDK_OFFSET(0x13C14190)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_FIDCGHIJLEN_OFFSET UNITYSDK_OFFSET(0x13C15AC0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x13C15410)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYMAXVALUE_OFFSET UNITYSDK_OFFSET(0x13C15100)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x13C14F00)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x13C13050)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x13C12EC0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_HANDLEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13C154B0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_HHDNLLEANGG_OFFSET UNITYSDK_OFFSET(0x13C135F0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_HOFENMKOCAH_OFFSET UNITYSDK_OFFSET(0x13C15D00)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_HPAINCDLJLH_OFFSET UNITYSDK_OFFSET(0x13C13490)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_JIGGCKOAKNB_OFFSET UNITYSDK_OFFSET(0x13C14060)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_KMLICNCNHEG_OFFSET UNITYSDK_OFFSET(0x13C15990)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_LOGCUSTOMTYPEHOLDERERROR_OFFSET UNITYSDK_OFFSET(0x13C150B0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_NLKBNCLGEJB_OFFSET UNITYSDK_OFFSET(0x13C14130)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x13C13FB0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13C13D20)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13C13FF0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13C140B0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x13C13720)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13C13AE0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONPROPERTYLISTCHANGEINCURFRAME_OFFSET UNITYSDK_OFFSET(0x13C13980)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13C131D0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13C13F60)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13C13060)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x13C15CF0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_PJJJOJIDPDB_OFFSET UNITYSDK_OFFSET(0x13C137C0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_PKMDIINJPPE_OFFSET UNITYSDK_OFFSET(0x13C13680)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_REMOVEPROEPRTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C13D70)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x13C141D0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE_SETPROPERTYCHANGEHANDLEMODE_OFFSET UNITYSDK_OFFSET(0x13C13190)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C158B0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13C158E0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13C158F0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13C15980)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13C158C0)
#define MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13C158D0)

inline static constexpr unsigned int MonoCustomPropertyUIControllerBase_TypeDefinitionIndex = 54796;

class MonoCustomPropertyUIControllerBase : public ::MoleMole::UIWindowController
{
public:
	::System::UInt32 BOAKNOENHGF; // 0x320
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LPOJHMBNLHO; // 0x328
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JFEPGKCAMHG; // 0x330
	::DNAELLALHIM* LKHCIIJMOAF; // 0x338
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* _allAnimationComponents; // 0x340
	::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* _DGGBKMAKAJI_k__BackingField; // 0x348
	::System::Boolean HCNGOMMBBGM; // 0x350
	::System::Boolean DLKOBOFPDCA; // 0x351
	::System::Boolean _mergeHandleEnable; // 0x352

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* get_ownerEntity()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_OWNERENTITY_OFFSET))(this);
	}

	::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* get_config()
	{
		return ((::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GET_CONFIG_OFFSET))(this);
	}

	::System::Void OnUIInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIINIT_OFFSET))(this);
	}

	::System::Void SetPropertyChangeHandleMode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_SETPROPERTYCHANGEHANDLEMODE_OFFSET))(this);
	}

	::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONSHOW_OFFSET))(this, showCtrlContext);
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
	}

	::System::Void OnPropertyListChangeInCurFrame(::System::Collections::Generic::List_1<::LGIAHKDMMEE>*& bodyList)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LGIAHKDMMEE>*&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONPROPERTYLISTCHANGEINCURFRAME_OFFSET))(this, bodyList);
	}

	::System::Void OnHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONHIDE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnUIDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONUIDESTROY_OFFSET))(this);
	}

	::System::Void OnAttachEntity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONATTACHENTITY_OFFSET))(this);
	}

	::System::Void RemoveProeprtyCallBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_REMOVEPROEPRTYCALLBACK_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ONENABLE_OFFSET))(this);
	}

	::System::Void DoOnCanvasWillRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_DOONCANVASWILLRENDER_OFFSET))(this);
	}

	::System::Void SetFollowTarget(::UnityEngine::Transform* target)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_SETFOLLOWTARGET_OFFSET))(this, target);
	}

	::System::Void AttachEntity(::MoleMole::Battle::Entity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_ATTACHENTITY_OFFSET))(this, entity);
	}

	::System::Boolean GetCustomPropertyValue(::System::String* customTypePlaceholder, ::System::Double& result)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYVALUE_OFFSET))(this, customTypePlaceholder, result);
	}

	::System::Double GetCustomPropertyMaxValue(::System::String* customTypePlaceholder)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GETCUSTOMPROPERTYMAXVALUE_OFFSET))(this, customTypePlaceholder);
	}

	::System::Void LogCustomTypeholderError(::System::String* customTypePlaceholder)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_LOGCUSTOMTYPEHOLDERERROR_OFFSET))(this, customTypePlaceholder);
	}

	::System::Void CollectAnimations(::Il2CppArray<::UnityEngine::Animation*>* animations)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Animation*>*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_COLLECTANIMATIONS_OFFSET))(this, animations);
	}

	::System::Single GetAnimClipLength(::UnityEngine::Animation* anim, ::System::String* clipName)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_GETANIMCLIPLENGTH_OFFSET))(this, anim, clipName);
	}

	::System::Void HandleProgress(::UnityEngine::RectTransform* progress, ::System::Single fullWidth, ::System::Single percentage)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_HANDLEPROGRESS_OFFSET))(this, progress, fullWidth, percentage);
	}

	::System::Void __base_OnUIDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnUIInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
	}

	::System::Void __base_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONDESTROY_OFFSET))(this);
	}

	::System::Void __base_OnHide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONHIDE_OFFSET))(this);
	}

	::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE___BASE_ONSHOW_OFFSET))(this, P0);
	}

	::System::Void JIGGCKOAKNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_JIGGCKOAKNB_OFFSET))(this);
	}

	::System::Void NLKBNCLGEJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_NLKBNCLGEJB_OFFSET))(this);
	}

	::System::Void HHDNLLEANGG(::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_HHDNLLEANGG_OFFSET))(this, POBADKEDFOE);
	}

	::System::Void KMLICNCNHEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_KMLICNCNHEG_OFFSET))(this);
	}

	::System::Void PKMDIINJPPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_PKMDIINJPPE_OFFSET))(this);
	}

	::System::Void FIDCGHIJLEN(::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_FIDCGHIJLEN_OFFSET))(this, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void PJJJOJIDPDB(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_PJJJOJIDPDB_OFFSET))(this, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void PANAINEBINN(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HOFENMKOCAH(::System::Collections::Generic::List_1<::LGIAHKDMMEE>*& IIMNCGONEIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LGIAHKDMMEE>*&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_HOFENMKOCAH_OFFSET))(this, IIMNCGONEIE);
	}

	::System::Void CLMJHAGKLAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_CLMJHAGKLAK_OFFSET))(this);
	}

	::System::Void HPAINCDLJLH(::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_HPAINCDLJLH_OFFSET))(this, POBADKEDFOE);
	}

	::System::Boolean BLAKDAPJGPM(::System::String* EIKEJMBPCIC, ::System::Double& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + MONOCUSTOMPROPERTYUICONTROLLERBASE_BLAKDAPJGPM_OFFSET))(this, EIKEJMBPCIC, EGEGIMGMJHN);
	}
};
