#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BICHAEHGDAL;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__BINDTWEENSLOT_B__110_2_OFFSET UNITYSDK_OFFSET(0x195F2440)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x195F23F0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x195F2430)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__PLAYMISSIONTIPFADEIN_B__375_0_OFFSET UNITYSDK_OFFSET(0x195F24E0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C___SORTMISSIONTIPS_B__371_0_OFFSET UNITYSDK_OFFSET(0x195F2450)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController___c_TypeDefinitionIndex = 40246;

	class UIInLevelMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Int32>** StaticGet___9__110_2()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35400);
		}
		static ::System::Comparison_1<::BICHAEHGDAL*>** StaticGet___9__375_0()
		{
			return (::System::Comparison_1<::BICHAEHGDAL*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35408);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35410);
		}
		static ::System::Comparison_1<::BICHAEHGDAL*>** StaticGet___9__371_0()
		{
			return (::System::Comparison_1<::BICHAEHGDAL*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BindTweenSlot_b__110_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__BINDTWEENSLOT_B__110_2_OFFSET))(this);
		}

		::System::Int32 __SortMissionTips_b__371_0(::BICHAEHGDAL* a, ::BICHAEHGDAL* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BICHAEHGDAL*, ::BICHAEHGDAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C___SORTMISSIONTIPS_B__371_0_OFFSET))(this, a, b);
		}

		::System::Int32 _PlayMissionTipFadeIn_b__375_0(::BICHAEHGDAL* a, ::BICHAEHGDAL* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BICHAEHGDAL*, ::BICHAEHGDAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__PLAYMISSIONTIPFADEIN_B__375_0_OFFSET))(this, a, b);
		}
	};
}
