#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6_B69BDC1C8AC5F4D2_OFFSET UNITYSDK_OFFSET(0x43C6420)
#define UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6_E54147F450836FB8_OFFSET UNITYSDK_OFFSET(0x43C6420)
#define UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x43C68B0)
#define UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ToggleGroup_F5628F8349D4A8A6_TypeDefinitionIndex = 18569;

	class ToggleGroup_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::ToggleGroup_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::UI::ToggleGroup_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::UnityEngine::UI::Toggle*>** StaticGet_B59FACF145743799()
		{
			return (::System::E891BA3236FD13E7<::UnityEngine::UI::Toggle*>**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::UnityEngine::UI::Toggle*, ::System::Boolean>** StaticGet_E4AE7C6234D30C14()
		{
			return (::System::Func_2<::UnityEngine::UI::Toggle*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ToggleGroup_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean B69BDC1C8AC5F4D2(::UnityEngine::UI::Toggle* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6_B69BDC1C8AC5F4D2_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean E54147F450836FB8(::UnityEngine::UI::Toggle* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F5628F8349D4A8A6_E54147F450836FB8_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
