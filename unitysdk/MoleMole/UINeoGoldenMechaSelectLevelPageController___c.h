#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1675E4C0)
#define MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1675E500)
#define MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__ONHIDE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1675E510)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaSelectLevelPageController___c_TypeDefinitionIndex = 54334;

	class UINeoGoldenMechaSelectLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINeoGoldenMechaSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C470);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UINeoGoldenMechaSelectLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnHide_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASELECTLEVELPAGECONTROLLER___C__ONHIDE_B__9_0_OFFSET))(this);
		}
	};
}
