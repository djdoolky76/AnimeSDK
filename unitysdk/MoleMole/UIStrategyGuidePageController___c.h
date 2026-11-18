#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHBEPCMHMC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIStrategyGuidePageController_ESortScoreLevel.h"

class BPHGNMNLLHF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C8BE50)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CREATESORTER_B__39_0_OFFSET UNITYSDK_OFFSET(0x19C8BEA0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8BE90)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__GETTOPRECOMMENDPROPERTYID_B__128_1_OFFSET UNITYSDK_OFFSET(0x19C8BF20)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONSKILLBTNCLICK_B__115_0_OFFSET UNITYSDK_OFFSET(0x19C8BF10)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHEVALUATELEVELICON_B__140_0_OFFSET UNITYSDK_OFFSET(0x19C8BF30)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHEVALUATELEVELICON_B__140_1_OFFSET UNITYSDK_OFFSET(0x19C8BF40)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHEVALUATELEVELICON_B__140_2_OFFSET UNITYSDK_OFFSET(0x19C8BF50)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHRECOMMENDRANDPROPERTYSTR_B__107_0_OFFSET UNITYSDK_OFFSET(0x19C8BEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c_TypeDefinitionIndex = 52228;

	class UIStrategyGuidePageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::OOHBEPCMHMC>** StaticGet___9__140_1()
		{
			return (::System::Func_2<::System::Object*, ::OOHBEPCMHMC>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45300);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45308);
		}
		static ::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::BPHGNMNLLHF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45310);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__107_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45318);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__128_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45320);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__140_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45328);
		}
		static ::System::Action** StaticGet___9__115_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45330);
		}
		static ::System::Func_2<::System::Object*, ::System::Single>** StaticGet___9__140_2()
		{
			return (::System::Func_2<::System::Object*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuidePageController___c_TypeDefinitionIndex)->GetStaticField(0x45338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateSorter_b__39_0(::BPHGNMNLLHF* _)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__CREATESORTER_B__39_0_OFFSET))(this, _);
		}

		::System::String* _RefreshRecommendRandPropertyStr_b__107_0(::System::Int32 pid)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHRECOMMENDRANDPROPERTYSTR_B__107_0_OFFSET))(this, pid);
		}

		::System::Void _OnSkillBtnClick_b__115_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__ONSKILLBTNCLICK_B__115_0_OFFSET))(this);
		}

		::System::Boolean _GetTopRecommendPropertyId_b__128_1(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__GETTOPRECOMMENDPROPERTYID_B__128_1_OFFSET))(this, id);
		}

		::System::Boolean _RefreshEvaluateLevelIcon_b__140_0(::MoleMole::UIStrategyGuidePageController_ESortScoreLevel item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIStrategyGuidePageController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHEVALUATELEVELICON_B__140_0_OFFSET))(this, item);
		}

		::OOHBEPCMHMC _RefreshEvaluateLevelIcon_b__140_1(::MoleMole::UIStrategyGuidePageController_ESortScoreLevel item)
		{
			return ((::OOHBEPCMHMC(*)(::PVOID, ::MoleMole::UIStrategyGuidePageController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHEVALUATELEVELICON_B__140_1_OFFSET))(this, item);
		}

		::System::Single _RefreshEvaluateLevelIcon_b__140_2(::MoleMole::UIStrategyGuidePageController_ESortScoreLevel item)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UIStrategyGuidePageController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__REFRESHEVALUATELEVELICON_B__140_2_OFFSET))(this, item);
		}
	};
}
