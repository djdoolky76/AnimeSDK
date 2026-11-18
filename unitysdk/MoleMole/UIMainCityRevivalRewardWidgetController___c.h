#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D0D0F0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0D130)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__SETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x15D0D140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalRewardWidgetController___c_TypeDefinitionIndex = 63261;

	class UIMainCityRevivalRewardWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42270);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetData_b__7_0(::DEDDPKGLKHI_LODLFMBCLAH a, ::DEDDPKGLKHI_LODLFMBCLAH b)
		{
			return ((::System::Int32(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__SETDATA_B__7_0_OFFSET))(this, a, b);
		}
	};
}
