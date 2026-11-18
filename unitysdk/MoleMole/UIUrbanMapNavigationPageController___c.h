#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFOKFECCJIL;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185E5500)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185E5540)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__GETCHILDAREALIST_B__25_0_OFFSET UNITYSDK_OFFSET(0x185E5550)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c_TypeDefinitionIndex = 77565;

	class UIUrbanMapNavigationPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::HFOKFECCJIL*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::HFOKFECCJIL*>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x391F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapNavigationPageController___c_TypeDefinitionIndex)->GetStaticField(0x391F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetChildAreaList_b__25_0(::HFOKFECCJIL* l, ::HFOKFECCJIL* r)
		{
			return ((::System::Int32(*)(::PVOID, ::HFOKFECCJIL*, ::HFOKFECCJIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__GETCHILDAREALIST_B__25_0_OFFSET))(this, l, r);
		}
	};
}
