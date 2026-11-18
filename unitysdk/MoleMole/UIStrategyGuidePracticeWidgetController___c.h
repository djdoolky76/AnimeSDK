#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DAD8C0)
#define MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAD900)
#define MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__ONPRACTICEBTNCLICK_B__21_1_OFFSET UNITYSDK_OFFSET(0x17DAD910)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePracticeWidgetController___c_TypeDefinitionIndex = 75602;

	class UIStrategyGuidePracticeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePracticeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C6C0);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePracticeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _OnPracticeBtnClick_b__21_1(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__ONPRACTICEBTNCLICK_B__21_1_OFFSET))(this, _);
		}
	};
}
