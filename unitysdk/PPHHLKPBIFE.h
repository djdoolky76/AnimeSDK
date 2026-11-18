#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"

class FGCOIBFFCHB;
namespace MoleMole { class UIKeyBindingContext; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PPHHLKPBIFE_AIFKBHMFLMG_OFFSET UNITYSDK_OFFSET(0x1C2C84A0)
#define PPHHLKPBIFE_AONGKHLBLHJ_OFFSET UNITYSDK_OFFSET(0x1C2C86D0)
#define PPHHLKPBIFE_BBHJFGIMLBL_OFFSET UNITYSDK_OFFSET(0x1C2C8140)
#define PPHHLKPBIFE_CMAAIOCNMAC_OFFSET UNITYSDK_OFFSET(0x1C2C7ED0)
#define PPHHLKPBIFE_GBPKKNAKCCP_OFFSET UNITYSDK_OFFSET(0x1C2C7A80)
#define PPHHLKPBIFE_KCHHMENONFI_OFFSET UNITYSDK_OFFSET(0x1C2C7C50)
#define PPHHLKPBIFE_LFAOKCOIAAA_OFFSET UNITYSDK_OFFSET(0x1C2C7CA0)
#define PPHHLKPBIFE_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x1C2C83D0)
#define PPHHLKPBIFE_PFGMMKADBPK_OFFSET UNITYSDK_OFFSET(0x1C2C7A90)
#define PPHHLKPBIFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C7A30)

inline static constexpr unsigned int PPHHLKPBIFE_TypeDefinitionIndex = 55129;

class PPHHLKPBIFE : public ::System::Object
{
public:
	::FGCOIBFFCHB* HAHINAANPMC; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* LACNMPLBBDE; // 0x18
	::MoleMole::UIKeyBindingContext* DAAAEJDBNFI; // 0x20
	::FGCOIBFFCHB* AJAIIHHHILG; // 0x28
	::MoleMole::LogicButtonInputType KJDDJIOJHJO; // 0x30
	::HPBIMDNDPLK FOIJODLFJFM; // 0x34
	::AIOFAMODPOO AFJOKEFFABD; // 0x38
	::System::Boolean FDNIFCMNONH; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Int32 BCJCOAOJDEM; // 0x40

	::System::Void _ctor(::MoleMole::UIKeyBindingContext* AAOCANGHBDG, ::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::FGCOIBFFCHB* GBAMPLDJMMC, ::FGCOIBFFCHB* AOMNGCCKENH, ::UnityEngine::UI::Extension::UILocalizationText* JLMNEKBJPAC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIKeyBindingContext*, ::MoleMole::LogicButtonInputType, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + PPHHLKPBIFE__CTOR_OFFSET))(this, AAOCANGHBDG, KKKMLLLKPHB, GBAMPLDJMMC, AOMNGCCKENH, JLMNEKBJPAC);
	}

	::MoleMole::LogicButtonInputType GBPKKNAKCCP()
	{
		return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_GBPKKNAKCCP_OFFSET))(this);
	}

	::System::Void PFGMMKADBPK(::UnityEngine::InputSystem::Key FGDHBPIDDDC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_PFGMMKADBPK_OFFSET))(this, FGDHBPIDDDC);
	}

	::System::Void KCHHMENONFI(::System::Int32 CEJIKNIEACI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_KCHHMENONFI_OFFSET))(this, CEJIKNIEACI);
	}

	::System::Void LFAOKCOIAAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_LFAOKCOIAAA_OFFSET))(this);
	}

	::System::Void CMAAIOCNMAC(::UnityEngine::InputSystem::LowLevel::GamepadButton FGDHBPIDDDC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_CMAAIOCNMAC_OFFSET))(this, FGDHBPIDDDC);
	}

	::System::Int32 BBHJFGIMLBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_BBHJFGIMLBL_OFFSET))(this);
	}

	::System::Void PDKCHDBODJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_PDKCHDBODJB_OFFSET))(this);
	}

	::System::Void AIFKBHMFLMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_AIFKBHMFLMG_OFFSET))(this);
	}

	::System::Void AONGKHLBLHJ(::UnityEngine::InputSystem::LowLevel::MouseButton FGDHBPIDDDC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + PPHHLKPBIFE_AONGKHLBLHJ_OFFSET))(this, FGDHBPIDDDC);
	}
};
