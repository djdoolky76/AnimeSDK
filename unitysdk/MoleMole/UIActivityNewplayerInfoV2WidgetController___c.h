#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJKHLPEHFLA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20EDC0)
#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20EE00)
#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__REFRESHDATAVIEW_B__14_1_OFFSET UNITYSDK_OFFSET(0x1A20EE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNewplayerInfoV2WidgetController___c_TypeDefinitionIndex = 69099;

	class UIActivityNewplayerInfoV2WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CJKHLPEHFLA*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::CJKHLPEHFLA*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityNewplayerInfoV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46E60);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityNewplayerInfoV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshDataView_b__14_1(::CJKHLPEHFLA* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::CJKHLPEHFLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__REFRESHDATAVIEW_B__14_1_OFFSET))(this, x);
		}
	};
}
