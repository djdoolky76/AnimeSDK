#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKGNBCLLHMK;
class FKLMEMBPANH;
namespace MoleMole { class UIWorkBenchTrustDegreePageController_PartnerCampTemplateData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__11_1_OFFSET UNITYSDK_OFFSET(0x18BE4530)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BUILDPARTNERDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x18BE4720)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BE44E0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE4520)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_0_OFFSET UNITYSDK_OFFSET(0x18BE45F0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_1_OFFSET UNITYSDK_OFFSET(0x18BE4640)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex = 42273;

	class UIWorkBenchTrustDegreePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::FKLMEMBPANH*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::FKLMEMBPANH*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x4ADD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x4ADD8);
		}
		static ::System::Comparison_1<::CKGNBCLLHMK*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::CKGNBCLLHMK*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x4ADE0);
		}
		static ::System::Func_2<::FKLMEMBPANH*, ::System::Object*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::FKLMEMBPANH*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x4ADE8);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchTrustDegreePageController___c_TypeDefinitionIndex)->GetStaticField(0x4ADF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_Button_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__11_1_OFFSET))(this);
		}

		::System::Int32 _InitPartnerCampData_b__16_0(::FKLMEMBPANH* a, ::FKLMEMBPANH* b)
		{
			return ((::System::Int32(*)(::PVOID, ::FKLMEMBPANH*, ::FKLMEMBPANH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_0_OFFSET))(this, a, b);
		}

		::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData* _InitPartnerCampData_b__16_1(::FKLMEMBPANH* template_)
		{
			return ((::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTemplateData*(*)(::PVOID, ::FKLMEMBPANH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__INITPARTNERCAMPDATA_B__16_1_OFFSET))(this, template_);
		}

		::System::Int32 _BuildPartnerData_b__20_0(::CKGNBCLLHMK* a, ::CKGNBCLLHMK* b)
		{
			return ((::System::Int32(*)(::PVOID, ::CKGNBCLLHMK*, ::CKGNBCLLHMK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__BUILDPARTNERDATA_B__20_0_OFFSET))(this, a, b);
		}
	};
}
