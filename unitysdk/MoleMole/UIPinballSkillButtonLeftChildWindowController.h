#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPinballSkillButtonRuntimeController.h"
#include "unitysdk/MoleMole/UIPinballSkillButtonRuntimeController_PinballButtonViewParts.h"

class BNEJFNBBGNE;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186EE410)
#define MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186EE520)
#define MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER_RESOLVEBUTTONVIEWPARTS_OFFSET UNITYSDK_OFFSET(0x186EE4A0)
#define MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186EE590)
#define MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186EE610)
#define MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186EE6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballSkillButtonLeftChildWindowController_TypeDefinitionIndex = 75393;

	class UIPinballSkillButtonLeftChildWindowController : public ::MoleMole::UIPinballSkillButtonRuntimeController
	{
	public:
		::BNEJFNBBGNE* _view; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::UIPinballSkillButtonRuntimeController_PinballButtonViewParts ResolveButtonViewParts()
		{
			return ((::MoleMole::UIPinballSkillButtonRuntimeController_PinballButtonViewParts(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER_RESOLVEBUTTONVIEWPARTS_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONLEFTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
