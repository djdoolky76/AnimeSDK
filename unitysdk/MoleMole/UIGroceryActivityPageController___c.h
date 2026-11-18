#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBELCJFHFJM;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184D6CF0)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184D6D30)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__ONUIOPENSHOW_B__23_0_OFFSET UNITYSDK_OFFSET(0x184D6D40)
#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__REFRESHUIWHENDATAUPDATE_B__38_0_OFFSET UNITYSDK_OFFSET(0x184D6D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController___c_TypeDefinitionIndex = 51760;

	class UIGroceryActivityPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::DBELCJFHFJM*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::DBELCJFHFJM*>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x42150);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x42158);
		}
		static ::System::Comparison_1<::DBELCJFHFJM*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::DBELCJFHFJM*>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x42160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpenShow_b__23_0(::DBELCJFHFJM* x, ::DBELCJFHFJM* y)
		{
			return ((::System::Int32(*)(::PVOID, ::DBELCJFHFJM*, ::DBELCJFHFJM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__ONUIOPENSHOW_B__23_0_OFFSET))(this, x, y);
		}

		::System::Int32 _RefreshUIWhenDataUpdate_b__38_0(::DBELCJFHFJM* x, ::DBELCJFHFJM* y)
		{
			return ((::System::Int32(*)(::PVOID, ::DBELCJFHFJM*, ::DBELCJFHFJM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER___C__REFRESHUIWHENDATAUPDATE_B__38_0_OFFSET))(this, x, y);
		}
	};
}
