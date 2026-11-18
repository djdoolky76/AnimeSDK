#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BODMJDEMHKN;

#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x20053600)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x20053640)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x20053650)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectChildWindowController___c_TypeDefinitionIndex = 96419;

	class UICpRoleSelectChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICpRoleSelectChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x52EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__40_0(::BODMJDEMHKN* l, ::BODMJDEMHKN* r)
		{
			return ((::System::Int32(*)(::PVOID, ::BODMJDEMHKN*, ::BODMJDEMHKN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C___CCTOR_B__40_0_OFFSET))(this, l, r);
		}
	};
}
