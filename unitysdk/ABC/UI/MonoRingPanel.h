#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ABC_UI_MONORINGPANEL_AFD8DA8874EEDD46_OFFSET UNITYSDK_OFFSET(0x2094E00)
#define ABC_UI_MONORINGPANEL_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x20945B0)
#define ABC_UI_MONORINGPANEL_F0A70AE06A22207E_OFFSET UNITYSDK_OFFSET(0x20946E0)
#define ABC_UI_MONORINGPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x2094F80)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoRingPanel_TypeDefinitionIndex = 8537;

	class MonoRingPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Count; // 0x20
		::System::Single Radius; // 0x24
		::System::Single Angle; // 0x28
		::System::Single Rotation; // 0x2C
		::ABC::UI::MonoPrefabLoader* ItemLoader; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F078F34D48FF79D7; // 0x38

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONORINGPANEL_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONORINGPANEL__CTOR_OFFSET))(this);
		}

		::System::Void AFD8DA8874EEDD46(::UnityEngine::Vector3& EA0D206265D7786B)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ABC_UI_MONORINGPANEL_AFD8DA8874EEDD46_OFFSET))(this, EA0D206265D7786B);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F0A70AE06A22207E()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONORINGPANEL_F0A70AE06A22207E_OFFSET))(this);
		}
	};
}
