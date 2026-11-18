#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/System/ValueTuple_2.h"

class BPNGLLLIMDC;
class LEEHADHKMEH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETCANACTIVE_OFFSET UNITYSDK_OFFSET(0x188412A0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0x18841340)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0x18840CB0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTCFG_OFFSET UNITYSDK_OFFSET(0x18840C60)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTID_OFFSET UNITYSDK_OFFSET(0x18840C00)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18840610)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188407A0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x188413B0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x188414B0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYUNLOCKEFFECT_OFFSET UNITYSDK_OFFSET(0x188416D0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18840E40)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x18840DF0)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x18841450)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETTALENTPOINT_OFFSET UNITYSDK_OFFSET(0x18840890)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x18840850)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18841790)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18841950)
#define MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188419E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTalentPointController_TypeDefinitionIndex = 84321;

	class UIAbyssTalentPointController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* SkinBtn; // 0x80
		::UnityEngine::UI::Image* Icon; // 0x88
		::UnityEngine::GameObject* LockObj; // 0x90
		::UnityEngine::GameObject* SelectObj; // 0x98
		::UnityEngine::GameObject* EFLight; // 0xA0
		::UnityEngine::GameObject* VXIconRed; // 0xA8
		::UnityEngine::UI::Extension::UILocalizationText* NameText; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* IconEffectList; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* IconActiveList; // 0xC0
		::System::String* UnLockAniStr; // 0xC8
		::System::String* ActiveAniStr; // 0xD0
		::System::Action_1<::System::Int32>* onClickAction; // 0xD8
		::UnityEngine::Animation* skinAni; // 0xE0
		::LEEHADHKMEH* talentPointCfg; // 0xE8
		::BPNGLLLIMDC* abyssModel; // 0xF0
		::System::Int32 id; // 0xF8
		::System::Int32 num; // 0xFC
		::System::Boolean isActive; // 0x100
		::System::Boolean isCanActive; // 0x101

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_START_OFFSET))(this);
		}

		::System::Void SetTalentPoint(::System::Int32 talentPointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETTALENTPOINT_OFFSET))(this, talentPointID);
		}

		::System::Int32 GetTalentPointID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTID_OFFSET))(this);
		}

		::LEEHADHKMEH* GetTalentPointCfg()
		{
			return ((::LEEHADHKMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETTALENTPOINTCFG_OFFSET))(this);
		}

		::System::Boolean GetMaterialEnough(::System::ValueTuple_2<::System::Int32, ::System::Int32>& vec)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETMATERIALENOUGH_OFFSET))(this, vec);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean GetCanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETCANACTIVE_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_GETISUNLOCK_OFFSET))(this);
		}

		::System::Void OnSkinBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_SETSELECTED_OFFSET))(this, isSelected);
		}

		::System::Single PlayActiveEffect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::Single PlayUnLockEffect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER_PLAYUNLOCKEFFECT_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPOINTCONTROLLER___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
