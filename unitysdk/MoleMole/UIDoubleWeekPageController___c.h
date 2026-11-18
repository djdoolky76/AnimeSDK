#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB87E0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB8820)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__INITVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x19FB8830)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController___c_TypeDefinitionIndex = 51933;

	class UIDoubleWeekPageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__11_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleWeekPageController___c_TypeDefinitionIndex)->GetStaticField(0x38D00);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleWeekPageController___c_TypeDefinitionIndex)->GetStaticField(0x38D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___C__INITVIEW_B__11_0_OFFSET))(this);
		}
	};
}
