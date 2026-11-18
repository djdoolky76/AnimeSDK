#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCBMMLFKBIB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB19220)
#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEB19260)
#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__GETALTARMAPDUNGEONID_B__37_0_OFFSET UNITYSDK_OFFSET(0xEB19340)
#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__ONCLAIMALLCLICK_B__25_0_OFFSET UNITYSDK_OFFSET(0xEB19310)
#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__ONCLAIMALLCLICK_B__25_1_OFFSET UNITYSDK_OFFSET(0xEB19330)
#define MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__ONCLAIMTOPCLICK_B__19_0_OFFSET UNITYSDK_OFFSET(0xEB19270)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketTaskDialogPopWindowController___c_TypeDefinitionIndex = 54029;

	class UIZKFriendMarketTaskDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZKFriendMarketTaskDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39350);
		}
		static ::System::Comparison_1<::MCBMMLFKBIB*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::MCBMMLFKBIB*>**)Il2CppClass::FromTypeDefinitionIndex(UIZKFriendMarketTaskDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39358);
		}
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZKFriendMarketTaskDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39360);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIZKFriendMarketTaskDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39368);
		}
		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIZKFriendMarketTaskDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClaimTopClick_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__ONCLAIMTOPCLICK_B__19_0_OFFSET))(this);
		}

		::System::Boolean _OnClaimAllClick_b__25_0(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__ONCLAIMALLCLICK_B__25_0_OFFSET))(this, id);
		}

		::System::UInt32 _OnClaimAllClick_b__25_1(::System::Int32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__ONCLAIMALLCLICK_B__25_1_OFFSET))(this, id);
		}

		::System::Int32 _GetAltarMapDungeonId_b__37_0(::MCBMMLFKBIB* a, ::MCBMMLFKBIB* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MCBMMLFKBIB*, ::MCBMMLFKBIB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETTASKDIALOGPOPWINDOWCONTROLLER___C__GETALTARMAPDUNGEONID_B__37_0_OFFSET))(this, a, b);
		}
	};
}
