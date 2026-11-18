#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKEMDNDAHNF;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B2FB90)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B2FBD0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x13B2FBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex = 74170;

	class UIWorkBenchMemoryDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::IKEMDNDAHNF*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::IKEMDNDAHNF*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x51980);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMemoryDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x51988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMemoryData_b__10_0(::IKEMDNDAHNF* a, ::IKEMDNDAHNF* b)
		{
			return ((::System::Int32(*)(::PVOID, ::IKEMDNDAHNF*, ::IKEMDNDAHNF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__INITMEMORYDATA_B__10_0_OFFSET))(this, a, b);
		}
	};
}
