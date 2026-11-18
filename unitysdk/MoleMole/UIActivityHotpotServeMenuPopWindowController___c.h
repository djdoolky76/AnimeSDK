#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GILOMLEHBPP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A122AB0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A122AF0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__REFRESHITEM_B__23_2_OFFSET UNITYSDK_OFFSET(0x1A122B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex = 92680;

	class UIActivityHotpotServeMenuPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34F70);
		}
		static ::System::Func_2<::GILOMLEHBPP*, ::System::Int32>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::GILOMLEHBPP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotpotServeMenuPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItem_b__23_2(::GILOMLEHBPP* x)
		{
			return ((::System::Int32(*)(::PVOID, ::GILOMLEHBPP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER___C__REFRESHITEM_B__23_2_OFFSET))(this, x);
		}
	};
}
