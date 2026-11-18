#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D08350)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D08390)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__GETDEFAULTSELECT_B__14_0_OFFSET UNITYSDK_OFFSET(0x19D083A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTalentPageController___c_TypeDefinitionIndex = 47642;

	class UIAbyssTalentPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EC40);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EC48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDefaultSelect_b__14_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__GETDEFAULTSELECT_B__14_0_OFFSET))(this, a, b);
		}
	};
}
