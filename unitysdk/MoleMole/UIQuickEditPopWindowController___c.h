#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182451A0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182451E0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__ONSELECTAVATAR_B__33_0_OFFSET UNITYSDK_OFFSET(0x182451F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c_TypeDefinitionIndex = 83763;

	class UIQuickEditPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIQuickEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35600);
		}
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__33_0()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(UIQuickEditPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectAvatar_b__33_0(::OAEFGCLEHHO* e)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__ONSELECTAVATAR_B__33_0_OFFSET))(this, e);
		}
	};
}
