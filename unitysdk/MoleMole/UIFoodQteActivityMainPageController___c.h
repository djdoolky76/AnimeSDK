#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1986F860)
#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1986F8A0)
#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER___C__HIDESINGLECLICKAREA_B__59_0_OFFSET UNITYSDK_OFFSET(0x1986F8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityMainPageController___c_TypeDefinitionIndex = 52102;

	class UIFoodQteActivityMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFoodQteActivityMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4F9B0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::RectTransform*, ::System::Boolean>, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::RectTransform*, ::System::Boolean>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFoodQteActivityMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4F9B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HideSingleClickArea_b__59_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::RectTransform*, ::System::Boolean> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::RectTransform*, ::System::Boolean>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER___C__HIDESINGLECLICKAREA_B__59_0_OFFSET))(this, x);
		}
	};
}
