#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPinballSkillButtonRuntimeController.h"
#include "unitysdk/MoleMole/UIPinballSkillButtonRuntimeController_PinballButtonViewParts.h"

class BCFECDMEDEN;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147ECB70)
#define MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147ECC80)
#define MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER_RESOLVEBUTTONVIEWPARTS_OFFSET UNITYSDK_OFFSET(0x147ECC00)
#define MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147ECCF0)
#define MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147ECD70)
#define MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147ECE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballSkillButtonRightChildWindowController_TypeDefinitionIndex = 47673;

	class UIPinballSkillButtonRightChildWindowController : public ::MoleMole::UIPinballSkillButtonRuntimeController
	{
	public:
		::BCFECDMEDEN* _view; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::UIPinballSkillButtonRuntimeController_PinballButtonViewParts ResolveButtonViewParts()
		{
			return ((::MoleMole::UIPinballSkillButtonRuntimeController_PinballButtonViewParts(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER_RESOLVEBUTTONVIEWPARTS_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONRIGHTCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
