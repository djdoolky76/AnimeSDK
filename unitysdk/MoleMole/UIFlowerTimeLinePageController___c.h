#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class ANHBPHMAICA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18096A00)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18096A40)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__REFRESHFLOWERTEXT_B__19_0_OFFSET UNITYSDK_OFFSET(0x18096A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePageController___c_TypeDefinitionIndex = 72804;

	class UIFlowerTimeLinePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerTimeLinePageController___c_TypeDefinitionIndex)->GetStaticField(0x50D10);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>, ::System::String*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerTimeLinePageController___c_TypeDefinitionIndex)->GetStaticField(0x50D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshFlowerText_b__19_0(::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*> kv)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__REFRESHFLOWERTEXT_B__19_0_OFFSET))(this, kv);
		}
	};
}
