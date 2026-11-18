#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C66C40)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C66C80)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__GETALLCARDS_B__10_0_OFFSET UNITYSDK_OFFSET(0x19C66C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController___c_TypeDefinitionIndex = 91654;

	class UIHollowDevelopBagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowDevelopBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C330);
		}
		static ::System::Predicate_1<::HGAJKHIMKJP*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowDevelopBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllCards_b__10_0(::HGAJKHIMKJP* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__GETALLCARDS_B__10_0_OFFSET))(this, data);
		}
	};
}
