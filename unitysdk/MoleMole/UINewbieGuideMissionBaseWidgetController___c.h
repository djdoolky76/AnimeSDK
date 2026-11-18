#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNHBBOBBIAE;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EB2450)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB2490)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__FETCHNOWPHASEALLREWARD_B__42_0_OFFSET UNITYSDK_OFFSET(0x18EB2670)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__ONCLICKPHASEBTN_B__24_0_OFFSET UNITYSDK_OFFSET(0x18EB24A0)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__SORTNOWPHASEQUESTLIST_B__40_0_OFFSET UNITYSDK_OFFSET(0x18EB2570)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex = 49399;

	class UINewbieGuideMissionBaseWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__42_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EBF0);
		}
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EBF8);
		}
		static ::System::Comparison_1<::NNHBBOBBIAE*>** StaticGet___9__40_0()
		{
			return (::System::Comparison_1<::NNHBBOBBIAE*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EC00);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionBaseWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickPhaseBtn_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__ONCLICKPHASEBTN_B__24_0_OFFSET))(this);
		}

		::System::Int32 _SortNowPhaseQuestList_b__40_0(::NNHBBOBBIAE* questA, ::NNHBBOBBIAE* questB)
		{
			return ((::System::Int32(*)(::PVOID, ::NNHBBOBBIAE*, ::NNHBBOBBIAE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__SORTNOWPHASEQUESTLIST_B__40_0_OFFSET))(this, questA, questB);
		}

		::System::Void _FetchNowPhaseAllReward_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONBASEWIDGETCONTROLLER___C__FETCHNOWPHASEALLREWARD_B__42_0_OFFSET))(this);
		}
	};
}
