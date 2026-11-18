#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1904B2F0)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1904B330)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__FILLREWARDMAP_B__1_0_OFFSET UNITYSDK_OFFSET(0x1904B340)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelBattleInfoWidgetController___c_TypeDefinitionIndex = 66609;

	class UIMarcelBattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelBattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47170);
		}
		static ::System::Comparison_1<::KOIDMLPJGML*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::KOIDMLPJGML*>**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelBattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x47178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FillRewardMap_b__1_0(::KOIDMLPJGML* a, ::KOIDMLPJGML* b)
		{
			return ((::System::Int32(*)(::PVOID, ::KOIDMLPJGML*, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___C__FILLREWARDMAP_B__1_0_OFFSET))(this, a, b);
		}
	};
}
