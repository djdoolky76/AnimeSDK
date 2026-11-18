#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class JGDEDJMBHHA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONCLICKPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x19B9C3B0)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B9B590)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B9B620)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B9B370)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19B9B520)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_RESETIMGACTIVE_OFFSET UNITYSDK_OFFSET(0x19B9B6A0)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETPREVIEWBANGBOO_OFFSET UNITYSDK_OFFSET(0x19B9BC50)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETPREVIEWROLE_OFFSET UNITYSDK_OFFSET(0x19B9B870)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETPREVIEWWEAPON_OFFSET UNITYSDK_OFFSET(0x19B9BFA0)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETRECEIVEMASK_OFFSET UNITYSDK_OFFSET(0x19B9B800)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9C440)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19B9C4A0)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19B9C530)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19B9C5C0)
#define MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19B9C650)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRoleRewardPreviewWidgetController_TypeDefinitionIndex = 73460;

	class UIActivityRoleRewardPreviewWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JGDEDJMBHHA* _view; // 0x2C8
		::System::Int32 previewItemID; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Action_1<::System::Int32>* previewCallback; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetImgActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_RESETIMGACTIVE_OFFSET))(this);
		}

		::System::Void SetReceiveMask(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETRECEIVEMASK_OFFSET))(this, active);
		}

		::System::Void SetPreviewRole(::System::Int32 avatarID, ::System::Action_1<::System::Int32>* previewCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETPREVIEWROLE_OFFSET))(this, avatarID, previewCallback);
		}

		::System::Void SetPreviewBangboo(::System::Int32 bangbooID, ::System::Action_1<::System::Int32>* previewCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETPREVIEWBANGBOO_OFFSET))(this, bangbooID, previewCallback);
		}

		::System::Void SetPreviewWeapon(::System::Int32 weaponID, ::System::Action_1<::System::Int32>* previewCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_SETPREVIEWWEAPON_OFFSET))(this, weaponID, previewCallback);
		}

		::System::Void OnClickPreviewAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER_ONCLICKPREVIEWAVATAR_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYROLEREWARDPREVIEWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
