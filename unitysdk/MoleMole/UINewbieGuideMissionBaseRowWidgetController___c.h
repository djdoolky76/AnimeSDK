#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C8A710)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8A750)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__REFRESHVIEWDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0x17C8A760)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideMissionBaseRowWidgetController___c_TypeDefinitionIndex = 49947;

	class UINewbieGuideMissionBaseRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F230);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewData_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEROWWIDGETCONTROLLER___C__REFRESHVIEWDATA_B__8_1_OFFSET))(this);
		}
	};
}
