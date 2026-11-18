#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BPHGNMNLLHF;
class KCOAGGHCODK;
class KIFJHFEJPGN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseSkillDetailRowWidgetController; }
namespace MoleMole { class UIRoleTalentBGColor; }

#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_NCPCPDBKOBH_OFFSET UNITYSDK_OFFSET(0x1A2B3D40)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2B31E0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2B3270)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2B2EE0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A2B2F40)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_REFRESHTALENT_OFFSET UNITYSDK_OFFSET(0x1A2B32F0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2B39A0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B3940)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2B3B00)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2B3B90)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2B3C20)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A2B3CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentRowWidgetController_TypeDefinitionIndex = 45714;

	class UIInLevelPauseTalentRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_talentBG()
		{
			return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTalentRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4EB80);
		}
		::KIFJHFEJPGN* _view; // 0x2C8
		::MoleMole::UIRoleTalentBGColor* OIPGCNOOKFB; // 0x2D0
		::System::Boolean BBBDDOGMIJO; // 0x2D8
		::System::Byte _padding0[0x7];
		::MoleMole::UIInLevelPauseSkillDetailRowWidgetController* CMJMCGEAFEI; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshTalent(::KCOAGGHCODK* template_, ::BPHGNMNLLHF* avatarItemData, ::System::Boolean unlock, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::KCOAGGHCODK*, ::BPHGNMNLLHF*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_REFRESHTALENT_OFFSET))(this, template_, avatarItemData, unlock, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void NCPCPDBKOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_NCPCPDBKOBH_OFFSET))(this);
		}
	};
}
