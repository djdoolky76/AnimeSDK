#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class EMPMHOJOLHJ;
class MJGHEKNNBNA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F661F0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CREATEACTIVATEEFFECTFORCAMP_B__37_0_OFFSET UNITYSDK_OFFSET(0x19F66320)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F66230)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__ONCAMPCHANGE_B__36_0_OFFSET UNITYSDK_OFFSET(0x19F66240)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c_TypeDefinitionIndex = 87230;

	class UIABBattlePhaseWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::MJGHEKNNBNA*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::MJGHEKNNBNA*>**)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A00);
		}
		static ::System::Func_2<::EMPMHOJOLHJ*, ::System::Int32>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::EMPMHOJOLHJ*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A08);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MJGHEKNNBNA* _OnCampChange_b__36_0(::System::ValueTuple_2<::System::Int32, ::System::Int32> pair)
		{
			return ((::MJGHEKNNBNA*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__ONCAMPCHANGE_B__36_0_OFFSET))(this, pair);
		}

		::System::Int32 _CreateActivateEffectForCamp_b__37_0(::EMPMHOJOLHJ* cfg)
		{
			return ((::System::Int32(*)(::PVOID, ::EMPMHOJOLHJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__CREATEACTIVATEEFFECTFORCAMP_B__37_0_OFFSET))(this, cfg);
		}
	};
}
