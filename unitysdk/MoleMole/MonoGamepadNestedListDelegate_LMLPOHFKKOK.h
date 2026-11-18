#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK_MCOPNBNDLFI_OFFSET UNITYSDK_OFFSET(0x12B5E140)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK_MMHEFKAHJCL_OFFSET UNITYSDK_OFFSET(0x12B5E0E0)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK_OPDFDCLCJHP_OFFSET UNITYSDK_OFFSET(0x12B5E0D0)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5E0C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_LMLPOHFKKOK_TypeDefinitionIndex = 45005;

	class MonoGamepadNestedListDelegate_LMLPOHFKKOK : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadNestedListDelegate* PFPAFBGPNHG; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK__CTOR_OFFSET))(this);
		}

		::System::Void OPDFDCLCJHP(::MoleMole::MonoGamepadNestedListDelegate* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadNestedListDelegate*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK_OPDFDCLCJHP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MMHEFKAHJCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK_MMHEFKAHJCL_OFFSET))(this);
		}

		::MoleMole::MonoGamepadNestedListDelegate* MCOPNBNDLFI()
		{
			return ((::MoleMole::MonoGamepadNestedListDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_LMLPOHFKKOK_MCOPNBNDLFI_OFFSET))(this);
		}
	};
}
