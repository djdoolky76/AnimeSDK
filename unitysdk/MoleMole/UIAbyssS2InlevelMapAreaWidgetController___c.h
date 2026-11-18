#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class EHIKCGJDEAF;
class GFNCMOBLKCI;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F32B10)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F32B50)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__FILTERANDSORTCONFIGS_B__17_0_OFFSET UNITYSDK_OFFSET(0x13F32B60)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__PROCESSSPECIALLAYER_B__26_0_OFFSET UNITYSDK_OFFSET(0x13F32BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex = 66879;

	class UIAbyssS2InlevelMapAreaWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A50);
		}
		static ::System::Comparison_1<::GFNCMOBLKCI*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::GFNCMOBLKCI*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A58);
		}
		static ::System::Predicate_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>>** StaticGet___9__26_0()
		{
			return (::System::Predicate_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2InlevelMapAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FilterAndSortConfigs_b__17_0(::GFNCMOBLKCI* l, ::GFNCMOBLKCI* r)
		{
			return ((::System::Int32(*)(::PVOID, ::GFNCMOBLKCI*, ::GFNCMOBLKCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__FILTERANDSORTCONFIGS_B__17_0_OFFSET))(this, l, r);
		}

		::System::Boolean _ProcessSpecialLayer_b__26_0(::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*> n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER___C__PROCESSSPECIALLAYER_B__26_0_OFFSET))(this, n);
		}
	};
}
