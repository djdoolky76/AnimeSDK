#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBADLOICGB;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F56C80)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F56CC0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x17F56CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex = 59409;

	class UIHollowInfoProgress02WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KNBADLOICGB*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::KNBADLOICGB*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C340);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__4_0(::KNBADLOICGB* a, ::KNBADLOICGB* b)
		{
			return ((::System::Int32(*)(::PVOID, ::KNBADLOICGB*, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET))(this, a, b);
		}
	};
}
