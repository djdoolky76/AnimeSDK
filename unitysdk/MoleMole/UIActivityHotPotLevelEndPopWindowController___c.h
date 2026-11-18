#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GILOMLEHBPP;
class LCLDDKEIDNF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F3E360)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F3E3A0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_1_OFFSET UNITYSDK_OFFSET(0x13F3E3D0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_3_OFFSET UNITYSDK_OFFSET(0x13F3E3F0)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x13F3E3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex = 73712;

	class UIActivityHotPotLevelEndPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GILOMLEHBPP*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::GILOMLEHBPP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C10);
		}
		static ::System::Func_2<::LCLDDKEIDNF*, ::System::Int32>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::LCLDDKEIDNF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C18);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__11_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotLevelEndPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__9_0(::GILOMLEHBPP* x)
		{
			return ((::System::Int32(*)(::PVOID, ::GILOMLEHBPP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, x);
		}

		::System::Int32 _RefreshFailTips_b__11_1(::LCLDDKEIDNF* c)
		{
			return ((::System::Int32(*)(::PVOID, ::LCLDDKEIDNF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_1_OFFSET))(this, c);
		}

		::System::Int32 _RefreshFailTips_b__11_3(::System::Object* x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__REFRESHFAILTIPS_B__11_3_OFFSET))(this, x);
		}
	};
}
