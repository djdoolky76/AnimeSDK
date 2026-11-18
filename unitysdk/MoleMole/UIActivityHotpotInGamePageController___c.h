#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGJFKHIEPFP;
class LCLDDKEIDNF;
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19157D10)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19157D50)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__ONSELECTSOUVENIREND_B__101_1_OFFSET UNITYSDK_OFFSET(0x19157DE0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENLEVELEND_B__96_0_OFFSET UNITYSDK_OFFSET(0x19157DC0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENRECOMMANDPAGE_B__149_0_OFFSET UNITYSDK_OFFSET(0x19157E80)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__REGEVENTS_B__133_1_OFFSET UNITYSDK_OFFSET(0x19157E70)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__TRIGGERLEVELONENEWBIE_B__70_0_OFFSET UNITYSDK_OFFSET(0x19157D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c_TypeDefinitionIndex = 43535;

	class UIActivityHotpotInGamePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__149_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BFC0);
		}
		static ::System::Func_2<::BGJFKHIEPFP*, ::System::Int32>** StaticGet___9__96_0()
		{
			return (::System::Func_2<::BGJFKHIEPFP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BFC8);
		}
		static ::System::Func_2<::LCLDDKEIDNF*, ::System::Int32>** StaticGet___9__101_1()
		{
			return (::System::Func_2<::LCLDDKEIDNF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BFD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BFD8);
		}
		static ::System::Action** StaticGet___9__70_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BFE0);
		}
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__133_1()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotInGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x3BFE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerLevelOneNewBie_b__70_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__TRIGGERLEVELONENEWBIE_B__70_0_OFFSET))(this);
		}

		::System::Int32 _OpenLevelEnd_b__96_0(::BGJFKHIEPFP* x)
		{
			return ((::System::Int32(*)(::PVOID, ::BGJFKHIEPFP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENLEVELEND_B__96_0_OFFSET))(this, x);
		}

		::System::Int32 _OnSelectSouvenirEnd_b__101_1(::LCLDDKEIDNF* _)
		{
			return ((::System::Int32(*)(::PVOID, ::LCLDDKEIDNF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__ONSELECTSOUVENIREND_B__101_1_OFFSET))(this, _);
		}

		::System::Void _RegEvents_b__133_1(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__REGEVENTS_B__133_1_OFFSET))(this, eventArgs);
		}

		::System::Void _OpenRecommandPage_b__149_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__OPENRECOMMANDPAGE_B__149_0_OFFSET))(this);
		}
	};
}
