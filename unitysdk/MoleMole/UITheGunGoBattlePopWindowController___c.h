#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NKJLGFPNLBD;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11361100)
#define MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11361140)
#define MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__GOBATTLE_B__13_0_OFFSET UNITYSDK_OFFSET(0x11361150)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunGoBattlePopWindowController___c_TypeDefinitionIndex = 56549;

	class UITheGunGoBattlePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(UITheGunGoBattlePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x391C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITheGunGoBattlePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x391C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoBattle_b__13_0(::NKJLGFPNLBD* res)
		{
			return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNGOBATTLEPOPWINDOWCONTROLLER___C__GOBATTLE_B__13_0_OFFSET))(this, res);
		}
	};
}
