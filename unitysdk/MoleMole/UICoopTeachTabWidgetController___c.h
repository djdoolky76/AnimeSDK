#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18078D50)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18078D90)
#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x18078DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachTabWidgetController___c_TypeDefinitionIndex = 82672;

	class UICoopTeachTabWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::FGCOIBFFCHB*, ::UnityEngine::UI::Image*>** StaticGet___9__10_0()
		{
			return (::System::Converter_2<::FGCOIBFFCHB*, ::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(UICoopTeachTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EE40);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICoopTeachTabWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EE48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* _RefreshView_b__10_0(::FGCOIBFFCHB* x)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this, x);
		}
	};
}
