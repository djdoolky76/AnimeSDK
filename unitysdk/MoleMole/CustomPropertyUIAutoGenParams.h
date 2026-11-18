#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CustomPropertyUIAutoGenParams_CustomPropertyUIType.h"
#include "unitysdk/MoleMole/UIControlReference_UICtrlType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1A7819C0)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GET_ISHIGHLIGHTPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x1A7819B0)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GET_ISPROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0x1A7819A0)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_ONAVATARIDCHANGED_OFFSET UNITYSDK_OFFSET(0x1A781A20)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A781A60)

namespace MoleMole
{
	inline static constexpr unsigned int CustomPropertyUIAutoGenParams_TypeDefinitionIndex = 53199;

	class CustomPropertyUIAutoGenParams : public ::System::Object
	{
	public:
		::System::String* InLevelMainPage_CustomPropertyUI_Path; // 0x10
		::System::String* LightUpGo; // 0x18
		::System::String* LineEF; // 0x20
		::System::String* RoleHPUILogic_CustomPropertyUI_Path; // 0x28
		::System::String* BulletFadeIn; // 0x30
		::System::String* PointMaxFadeIn; // 0x38
		::System::String* Progress; // 0x40
		::System::String* PlaceHolderKey_CurChargePoint; // 0x48
		::System::String* PointMaxFadeOut; // 0x50
		::System::String* MaxAnim; // 0x58
		::System::String* ItemFadeOut; // 0x60
		::UnityEngine::GameObject* PointItemPrefab; // 0x68
		::System::String* BulletFadeOut; // 0x70
		::System::String* ItemFadeIn; // 0x78
		::System::String* PlaceHolderKey_MaxChargePoint; // 0x80
		::System::String* CtrlName; // 0x88
		::System::String* PlaceHolderKey_IsEnhance; // 0x90
		::System::String* EffAnim; // 0x98
		::System::String* ExportDir; // 0xA0
		::System::String* LineEFParent; // 0xA8
		::System::String* LightUpAnim; // 0xB0
		::System::String* ItemLoop; // 0xB8
		::System::String* Fill; // 0xC0
		::System::String* Content; // 0xC8
		::System::String* PlaceHolderKey_Threshold; // 0xD0
		::System::String* ProgressFullAnimClip; // 0xD8
		::System::String* BulletLoop; // 0xE0
		::MoleMole::UIControlReference_UICtrlType CtrlType; // 0xE8
		::System::Int32 AvatarID; // 0xEC
		::MoleMole::CustomPropertyUIAutoGenParams_CustomPropertyUIType UIType; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProgressType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GET_ISPROGRESSTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsHighlightPointType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GET_ISHIGHLIGHTPOINTTYPE_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAllAvatarIDs()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GETALLAVATARIDS_OFFSET))();
		}

		::System::Void OnAvatarIdChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_ONAVATARIDCHANGED_OFFSET))(this);
		}
	};
}
