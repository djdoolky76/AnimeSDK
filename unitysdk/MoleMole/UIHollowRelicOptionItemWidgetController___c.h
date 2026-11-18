#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEFKCFCIHDK;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__BUILDDESCRIPTION_B__30_1_OFFSET UNITYSDK_OFFSET(0x183A96A0)
#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183A9650)
#define MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183A9690)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicOptionItemWidgetController___c_TypeDefinitionIndex = 76033;

	class UIHollowRelicOptionItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRelicOptionItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44FA0);
		}
		static ::System::Comparison_1<::AEFKCFCIHDK*>** StaticGet___9__30_1()
		{
			return (::System::Comparison_1<::AEFKCFCIHDK*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRelicOptionItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildDescription_b__30_1(::AEFKCFCIHDK* l, ::AEFKCFCIHDK* r)
		{
			return ((::System::Int32(*)(::PVOID, ::AEFKCFCIHDK*, ::AEFKCFCIHDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONITEMWIDGETCONTROLLER___C__BUILDDESCRIPTION_B__30_1_OFFSET))(this, l, r);
		}
	};
}
