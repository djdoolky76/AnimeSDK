#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0DD0F0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DD130)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__ONUIINIT_B__2_7_OFFSET UNITYSDK_OFFSET(0x1A0DD140)

namespace MoleMole
{
	inline static constexpr unsigned int UIAddFriendWidgetController___c_TypeDefinitionIndex = 43118;

	class UIAddFriendWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::JGBMOOJHMBF*>** StaticGet___9__2_7()
		{
			return (::System::Action_1<::JGBMOOJHMBF*>**)Il2CppClass::FromTypeDefinitionIndex(UIAddFriendWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x488C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAddFriendWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x488C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_7(::JGBMOOJHMBF* info)
		{
			return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__ONUIINIT_B__2_7_OFFSET))(this, info);
		}
	};
}
