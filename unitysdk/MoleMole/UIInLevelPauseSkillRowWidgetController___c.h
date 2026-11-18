#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C435F0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C43630)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHDESC_B__10_0_OFFSET UNITYSDK_OFFSET(0x17C43640)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x17C436F0)
#define MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_1_OFFSET UNITYSDK_OFFSET(0x17C437A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex = 91611;

	class UIInLevelPauseSkillRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35420);
		}
		static ::System::Predicate_1<::BPDOBLDMEGB*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::BPDOBLDMEGB*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35428);
		}
		static ::System::Predicate_1<::BPDOBLDMEGB*>** StaticGet___9__11_0()
		{
			return (::System::Predicate_1<::BPDOBLDMEGB*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35430);
		}
		static ::System::Comparison_1<::BPDOBLDMEGB*>** StaticGet___9__11_1()
		{
			return (::System::Comparison_1<::BPDOBLDMEGB*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshDesc_b__10_0(::BPDOBLDMEGB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHDESC_B__10_0_OFFSET))(this, x);
		}

		::System::Boolean _RefreshInfo_b__11_0(::BPDOBLDMEGB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshInfo_b__11_1(::BPDOBLDMEGB* a, ::BPDOBLDMEGB* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BPDOBLDMEGB*, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLROWWIDGETCONTROLLER___C__REFRESHINFO_B__11_1_OFFSET))(this, a, b);
		}
	};
}
