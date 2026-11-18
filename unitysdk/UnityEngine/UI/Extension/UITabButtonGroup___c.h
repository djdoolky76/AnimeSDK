#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__49_1_OFFSET UNITYSDK_OFFSET(0x1EBC69C0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__49_3_OFFSET UNITYSDK_OFFSET(0x1EBC69D0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC6970)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC69B0)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__GETORDEREDENABLEDTABS_B__78_1_OFFSET UNITYSDK_OFFSET(0x1EBC69E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup___c_TypeDefinitionIndex = 57566;

	class UITabButtonGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::UI::Extension::UITabButton*, ::System::Boolean>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::UnityEngine::UI::Extension::UITabButton*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x47A70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x47A78);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__49_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x47A80);
		}
		static ::System::Action** StaticGet___9__49_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x47A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Void _AddLockTab_b__49_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__49_1_OFFSET))(this, _);
		}

		::System::Void _AddLockTab_b__49_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__49_3_OFFSET))(this);
		}

		::System::Boolean _GetOrderedEnabledTabs_b__78_1(::UnityEngine::UI::Extension::UITabButton* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButton*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__GETORDEREDENABLEDTABS_B__78_1_OFFSET))(this, x);
		}
	};
}
