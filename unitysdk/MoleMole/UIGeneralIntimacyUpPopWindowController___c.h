#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralIntimacyUpPopWindowController_Context; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__ADDCONTEXT_B__11_0_OFFSET UNITYSDK_OFFSET(0x18940BD0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18940B80)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18940BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyUpPopWindowController___c_TypeDefinitionIndex = 47183;

	class UIGeneralIntimacyUpPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralIntimacyUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46F60);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralIntimacyUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddContext_b__11_0(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* a, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___C__ADDCONTEXT_B__11_0_OFFSET))(this, a, b);
		}
	};
}
