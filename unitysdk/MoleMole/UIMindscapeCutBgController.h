#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BPHGNMNLLHF;
namespace Code::Logic::UI::UIComponent { class MonoMindscapeLenticular; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoLinearTransition; }
namespace MoleMole { class MonoMindscapeController; }
namespace MoleMole { class UIMindscapeLevelRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1881F090)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETAVATARCOLOR_OFFSET UNITYSDK_OFFSET(0x1881C370)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPECUTBGNAME_OFFSET UNITYSDK_OFFSET(0x1881CC70)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPECUTCHANGENAME_OFFSET UNITYSDK_OFFSET(0x1881D800)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPELENTICULAR_OFFSET UNITYSDK_OFFSET(0x1881EC00)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_HIDEMASKANI_OFFSET UNITYSDK_OFFSET(0x1881D160)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1881A0B0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONLEVELROWCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1881C540)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONTALENTUNLOCKHANDLE_OFFSET UNITYSDK_OFFSET(0x1881CAE0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1881F280)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGFADEIN_OFFSET UNITYSDK_OFFSET(0x1881E6A0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x1881CF10)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYCHANGEAVATARFADEIN_OFFSET UNITYSDK_OFFSET(0x1881E7C0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYLEVELROWUNLOCK_OFFSET UNITYSDK_OFFSET(0x1881E8E0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1881D2C0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_RESETCUSTOMLISTMANAGEITEMS_OFFSET UNITYSDK_OFFSET(0x1881D790)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATARCOLOR_OFFSET UNITYSDK_OFFSET(0x1881C3D0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x1881D240)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_1_OFFSET UNITYSDK_OFFSET(0x1881C170)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_OFFSET UNITYSDK_OFFSET(0x1881EC50)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLEVELROWSTATE_OFFSET UNITYSDK_OFFSET(0x1881C780)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_1_OFFSET UNITYSDK_OFFSET(0x1881DDD0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_OFFSET UNITYSDK_OFFSET(0x1881DAA0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETUNLOCKOVERHANDLE_OFFSET UNITYSDK_OFFSET(0x1881CA90)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1881EBC0)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1881F440)
#define MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1881F810)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeCutBgController_TypeDefinitionIndex = 72891;

	class UIMindscapeCutBgController : public ::MoleMole::UIMonoController
	{
	public:
		// static const ::System::String* FadeInName; // 0x0
		// static const ::System::String* ChangeAvatarFadeInName; // 0x0
		::MoleMole::MonoMindscapeController* maskBgRootController; // 0x80
		::Code::Logic::UI::UIComponent::MonoMindscapeLenticular* _mindscapeLenticular; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* maskBgRootList; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::MonoLinearTransition*>* MaskLinearTransitionList; // 0x98
		::UnityEngine::RectTransform* levelRoot; // 0xA0
		::UnityEngine::RectTransform* AniRoot; // 0xA8
		::UnityEngine::RectTransform* AniChangeRoot; // 0xB0
		::UnityEngine::Color AvatarColor; // 0xB8
		::UnityEngine::Vector2 LevelRowOffset2; // 0xC8
		::UnityEngine::Vector2 m_MaxRotation; // 0xD0
		::UnityEngine::GameObject* _rootObj; // 0xD8
		::UnityEngine::Animation* SkinAni; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _levelRootList; // 0xE8
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeLevelRowWidgetController*>* _levelRowWidgetList; // 0xF0
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeLevelRowWidgetController*>* _levelRowSpaceWidgetList; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>* maskBgDir; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* maskAniList; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* maskChangeAniList; // 0x110
		::System::Boolean _previewMode; // 0x118
		::System::Boolean _friendPreviewMode; // 0x119
		::System::Byte _padding0[0x6];
		::System::String* ModelName; // 0x120
		::BPHGNMNLLHF* _avatarData; // 0x128
		::System::Int32 _selectSlot; // 0x130
		::System::Byte _padding1[0x4];
		::System::Action_1<::System::Int32>* _talentUnlockOverHandle; // 0x138
		::UnityEngine::RectTransform* _levelRootRect; // 0x140
		::System::Boolean _isShowLevelRow; // 0x148
		::System::Boolean isShowLenticular; // 0x149

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::UnityEngine::Color GetAvatarColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETAVATARCOLOR_OFFSET))(this);
		}

		::System::Void SetAvatarColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATARCOLOR_OFFSET))(this);
		}

		::System::Void OnLevelRowClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONLEVELROWCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void SetUnlockOverHandle(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETUNLOCKOVERHANDLE_OFFSET))(this, action);
		}

		::System::Void OnTalentUnlockHandle(::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONTALENTUNLOCKHANDLE_OFFSET))(this, isUnlock);
		}

		::System::String* GetMindscapeCutBgName(::System::Int32 slot)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPECUTBGNAME_OFFSET))(this, slot);
		}

		::System::Single PlayBgUnLockAni(::System::Int32 slot)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGUNLOCKANI_OFFSET))(this, slot);
		}

		::System::Void HideMaskAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_HIDEMASKANI_OFFSET))(this);
		}

		::System::Void SetAvatar(::BPHGNMNLLHF* _avatar, ::System::Boolean previewMode, ::System::Boolean friendPreviewMode)
		{
			return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETAVATAR_OFFSET))(this, _avatar, previewMode, friendPreviewMode);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ResetCustomListManageItems(::MoleMole::MonoGamepadCustomList* customList, ::System::Int32 defaultSelectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadCustomList*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_RESETCUSTOMLISTMANAGEITEMS_OFFSET))(this, customList, defaultSelectIndex);
		}

		::System::String* GetMindscapeCutChangeName(::System::Int32 changeAniIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPECUTCHANGENAME_OFFSET))(this, changeAniIndex);
		}

		::System::Single SetMaskBgState(::Il2CppArray<::System::Boolean>* tabState, ::System::Boolean withAni, ::System::Int32 changeAniIndex)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::Boolean>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_OFFSET))(this, tabState, withAni, changeAniIndex);
		}

		::System::Void SetMaskBgState_1(::Il2CppArray<::System::Boolean>* tabState)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETMASKBGSTATE_1_OFFSET))(this, tabState);
		}

		::System::Single SetLevelRowState(::System::Boolean isShow, ::System::Boolean isInit)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLEVELROWSTATE_OFFSET))(this, isShow, isInit);
		}

		::System::Single PlayBgFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYBGFADEIN_OFFSET))(this);
		}

		::System::Single PlayChangeAvatarFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYCHANGEAVATARFADEIN_OFFSET))(this);
		}

		::System::Void PlayLevelRowUnlock(::System::Int32 slot, ::System::Action* unlockCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_PLAYLEVELROWUNLOCK_OFFSET))(this, slot, unlockCallback);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_UPDATE_OFFSET))(this);
		}

		::Code::Logic::UI::UIComponent::MonoMindscapeLenticular* GetMindscapeLenticular()
		{
			return ((::Code::Logic::UI::UIComponent::MonoMindscapeLenticular*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_GETMINDSCAPELENTICULAR_OFFSET))(this);
		}

		::System::Void SetLenticularState(::UnityEngine::Vector2 mousePos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_OFFSET))(this, mousePos);
		}

		::System::Void SetLenticularState_1(::System::Boolean isLenticular)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_SETLENTICULARSTATE_1_OFFSET))(this, isLenticular);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPECUTBGCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
