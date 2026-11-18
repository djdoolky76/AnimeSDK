#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_BNAKLLKOPNB_OFFSET UNITYSDK_OFFSET(0x7270A0)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_FPGJCEDFEKJ_OFFSET UNITYSDK_OFFSET(0x727080)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_NULLTARGET_OFFSET UNITYSDK_OFFSET(0x14324D30)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_TARGETMODULEWRAPPER_OFFSET UNITYSDK_OFFSET(0x282350)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_OKBBGLIFOED_OFFSET UNITYSDK_OFFSET(0x727090)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_SET_TARGETMODULEWRAPPER_OFFSET UNITYSDK_OFFSET(0x727070)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadNavTargetConfig_TypeDefinitionIndex = 75682;

	struct alignas(8) GamepadNavTargetConfig
	{
		::MoleMole::MonoGamepadModule* targetModule; // 0x10
		::System::String* targetModuleName; // 0x18

		/*
		static ::MoleMole::GamepadNavTargetConfig get_NullTarget()
		{
			return ((::MoleMole::GamepadNavTargetConfig(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_NULLTARGET_OFFSET))();
		}
		*/

		::MoleMole::MonoGamepadModule* get_targetModuleWrapper()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_TARGETMODULEWRAPPER_OFFSET))(this);
		}

		::System::Void set_targetModuleWrapper(::MoleMole::MonoGamepadModule* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_SET_TARGETMODULEWRAPPER_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::MonoGamepadModule* FPGJCEDFEKJ(::MoleMole::UIBaseController* NCIMBHDKIJM)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_FPGJCEDFEKJ_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Boolean OKBBGLIFOED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_OKBBGLIFOED_OFFSET))(this);
		}

		::System::Void BNAKLLKOPNB(::MoleMole::MonoGamepadModule* LOFAJNPDGAD, ::System::String* JFMECFLEHFI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_BNAKLLKOPNB_OFFSET))(this, LOFAJNPDGAD, JFMECFLEHFI);
		}
	};
}
