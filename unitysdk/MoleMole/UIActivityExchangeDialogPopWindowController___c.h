#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGKBACMKBCL;
class KGCOCCLEKGP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16323920)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16323960)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x16323970)
#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_1_OFFSET UNITYSDK_OFFSET(0x16323980)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex = 69109;

	class UIActivityExchangeDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BGKBACMKBCL*, ::KGCOCCLEKGP*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::BGKBACMKBCL*, ::KGCOCCLEKGP*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E38);
		}
		static ::System::Func_2<::KGCOCCLEKGP*, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::KGCOCCLEKGP*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityExchangeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::KGCOCCLEKGP* _UpdateExchangeTable_b__15_0(::BGKBACMKBCL* x)
		{
			return ((::KGCOCCLEKGP*(*)(::PVOID, ::BGKBACMKBCL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_0_OFFSET))(this, x);
		}

		::System::UInt32 _UpdateExchangeTable_b__15_1(::KGCOCCLEKGP* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::KGCOCCLEKGP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGPOPWINDOWCONTROLLER___C__UPDATEEXCHANGETABLE_B__15_1_OFFSET))(this, x);
		}
	};
}
