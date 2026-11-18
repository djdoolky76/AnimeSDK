#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFPKNGNFJNO;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FA1C0)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188FA200)
#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__ONSHOW_B__10_0_OFFSET UNITYSDK_OFFSET(0x188FA210)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskSubPanelWidgetController___c_TypeDefinitionIndex = 39538;

	class UIBangkovTaskSubPanelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KFPKNGNFJNO*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::KFPKNGNFJNO*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskSubPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EA80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskSubPanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EA88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__10_0(::KFPKNGNFJNO* a, ::KFPKNGNFJNO* b)
		{
			return ((::System::Int32(*)(::PVOID, ::KFPKNGNFJNO*, ::KFPKNGNFJNO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER___C__ONSHOW_B__10_0_OFFSET))(this, a, b);
		}
	};
}
