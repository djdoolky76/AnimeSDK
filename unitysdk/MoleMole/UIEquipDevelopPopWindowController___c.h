#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19990300)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19990340)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DOSETSTARUPCONSUME_B__49_0_OFFSET UNITYSDK_OFFSET(0x199904D0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_0_OFFSET UNITYSDK_OFFSET(0x199904B0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_1_OFFSET UNITYSDK_OFFSET(0x199904C0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__INITVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x19990350)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__52_0_OFFSET UNITYSDK_OFFSET(0x199904E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c_TypeDefinitionIndex = 43343;

	class UIEquipDevelopPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C110);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__18_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C118);
		}
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C120);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C128);
		}
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C130);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__INITVIEW_B__18_0_OFFSET))(this);
		}

		::System::Boolean _GetRealAddedValue_b__46_0(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_0_OFFSET))(this, c);
		}

		::System::Boolean _GetRealAddedValue_b__46_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_1_OFFSET))(this, c);
		}

		::System::Int32 _DoSetStarUpConsume_b__49_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> itempairs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DOSETSTARUPCONSUME_B__49_0_OFFSET))(this, itempairs);
		}

		::System::Void _ShowBackItemListDialog_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__52_0_OFFSET))(this);
		}
	};
}
