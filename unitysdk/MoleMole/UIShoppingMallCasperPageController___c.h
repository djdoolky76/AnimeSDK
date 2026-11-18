#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIPCHKEHME;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1889EE90)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CLICKBACKTOMAINCITY_B__38_0_OFFSET UNITYSDK_OFFSET(0x1889EEE0)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1889EED0)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__SETCURGOODSLIST_B__58_0_OFFSET UNITYSDK_OFFSET(0x1889EFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c_TypeDefinitionIndex = 60507;

	class UIShoppingMallCasperPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x4DAB0);
		}
		static ::System::Func_2<::LHIPCHKEHME*, ::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::LHIPCHKEHME*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x4DAB8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallCasperPageController___c_TypeDefinitionIndex)->GetStaticField(0x4DAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickBackToMainCity_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__CLICKBACKTOMAINCITY_B__38_0_OFFSET))(this);
		}

		::System::Boolean _SetCurGoodsList_b__58_0(::LHIPCHKEHME* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHIPCHKEHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__SETCURGOODSLIST_B__58_0_OFFSET))(this, x);
		}
	};
}
