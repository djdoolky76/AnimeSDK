#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BF3DE0)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BF3E20)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x14BF3E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinPopWindowController___c_TypeDefinitionIndex = 40936;

	class UIActivityCheckinPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E10);
		}
		static ::System::Func_2<::AOJKLCGGPAK*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::AOJKLCGGPAK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x46E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_0(::AOJKLCGGPAK* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, x);
		}
	};
}
