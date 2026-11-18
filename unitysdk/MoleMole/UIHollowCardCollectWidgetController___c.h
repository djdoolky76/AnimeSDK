#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187C9310)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187C9350)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_0_OFFSET UNITYSDK_OFFSET(0x187C9360)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_2_OFFSET UNITYSDK_OFFSET(0x187C9370)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCollectWidgetController___c_TypeDefinitionIndex = 84545;

	class UIHollowCardCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FA20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FA28);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitSort_b__16_0(::System::String* filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_0_OFFSET))(this, filter);
		}

		::System::String* _InitSort_b__16_2(::System::String* filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__INITSORT_B__16_2_OFFSET))(this, filter);
		}
	};
}
