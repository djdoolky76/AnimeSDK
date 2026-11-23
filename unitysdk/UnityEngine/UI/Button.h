#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace F5D9B2730D543D46 { class EE9552F10B511EB1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define UNITYENGINE_UI_BUTTON_A9C5F7C1E49E5F04_OFFSET UNITYSDK_OFFSET(0x43C8490)
#define UNITYENGINE_UI_BUTTON_B2548FBB0AE99F04_OFFSET UNITYSDK_OFFSET(0x43C83F0)
#define UNITYENGINE_UI_BUTTON_B5B43363AE23BB2C_OFFSET UNITYSDK_OFFSET(0x43C8570)
#define UNITYENGINE_UI_BUTTON_B975B62504197B18_OFFSET UNITYSDK_OFFSET(0x1D19E40)
#define UNITYENGINE_UI_BUTTON_B9B989BB4DC8AAC1_OFFSET UNITYSDK_OFFSET(0x1D1A110)
#define UNITYENGINE_UI_BUTTON_F94DADE743FF8414_OFFSET UNITYSDK_OFFSET(0x43C8460)
#define UNITYENGINE_UI_BUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x43C8600)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Button_TypeDefinitionIndex = 18695;

	class Button : public ::UnityEngine::UI::Selectable
	{
	public:
		::UnityEngine::UI::Button_ButtonClickedEvent* m_OnClick; // 0x100

		::UnityEngine::UI::Button_ButtonClickedEvent* B975B62504197B18()
		{
			return ((::UnityEngine::UI::Button_ButtonClickedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_B975B62504197B18_OFFSET))(this);
		}

		::System::Void B5B43363AE23BB2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_B5B43363AE23BB2C_OFFSET))(this);
		}

		::System::Void F94DADE743FF8414(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_F94DADE743FF8414_OFFSET))(this, E7336521BA8945EE);
		}

		::System::Collections::IEnumerator* B2548FBB0AE99F04()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_B2548FBB0AE99F04_OFFSET))(this);
		}

		::System::Void B9B989BB4DC8AAC1(::UnityEngine::UI::Button_ButtonClickedEvent* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button_ButtonClickedEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_B9B989BB4DC8AAC1_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A9C5F7C1E49E5F04(::F5D9B2730D543D46::EE9552F10B511EB1* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::EE9552F10B511EB1*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON_A9C5F7C1E49E5F04_OFFSET))(this, E7336521BA8945EE);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTON__CTOR_OFFSET))(this);
		}
	};
}
