#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECEMPOCFOMG;
class OMCMBOPJCAO;
namespace MoleMole { class UIRABGachaItemRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BBB6F0)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BBB730)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__ONPULLSUCCESSSHOWREWARD_B__19_0_OFFSET UNITYSDK_OFFSET(0x17BBB740)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_0_OFFSET UNITYSDK_OFFSET(0x17BBB7A0)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_1_OFFSET UNITYSDK_OFFSET(0x17BBB810)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaRowWidgetController___c_TypeDefinitionIndex = 54802;

	class UIRABGachaRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::OMCMBOPJCAO*, ::System::Object*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::OMCMBOPJCAO*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45190);
		}
		static ::System::Func_2<::ECEMPOCFOMG*, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::ECEMPOCFOMG*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45198);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__23_1()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x451A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x451A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnPullSuccessShowReward_b__19_0(::ECEMPOCFOMG* item)
		{
			return ((::System::Int32(*)(::PVOID, ::ECEMPOCFOMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__ONPULLSUCCESSSHOWREWARD_B__19_0_OFFSET))(this, item);
		}

		::MoleMole::UIRABGachaItemRowWidgetController_Data* _ShowPoolData_b__23_0(::OMCMBOPJCAO* pool)
		{
			return ((::MoleMole::UIRABGachaItemRowWidgetController_Data*(*)(::PVOID, ::OMCMBOPJCAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_0_OFFSET))(this, pool);
		}

		::System::Int32 _ShowPoolData_b__23_1(::MoleMole::UIRABGachaItemRowWidgetController_Data* x, ::MoleMole::UIRABGachaItemRowWidgetController_Data* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIRABGachaItemRowWidgetController_Data*, ::MoleMole::UIRABGachaItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__SHOWPOOLDATA_B__23_1_OFFSET))(this, x, y);
		}
	};
}
