#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__BINDBTNS_B__87_5_OFFSET UNITYSDK_OFFSET(0x155ED350)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155ED300)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155ED340)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c_TypeDefinitionIndex = 59204;

	class UIRoleSelectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__87_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C660);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindBtns_b__87_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__BINDBTNS_B__87_5_OFFSET))(this);
		}
	};
}
