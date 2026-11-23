#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ABC_UI_MONOSKILLWHEELRINGPANEL_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x18D8450)
#define ABC_UI_MONOSKILLWHEELRINGPANEL_B832885353A87896_OFFSET UNITYSDK_OFFSET(0x18D86A0)
#define ABC_UI_MONOSKILLWHEELRINGPANEL_F0A70AE06A22207E_OFFSET UNITYSDK_OFFSET(0x18D8580)
#define ABC_UI_MONOSKILLWHEELRINGPANEL_FA9CB5B0F71D3C4B_OFFSET UNITYSDK_OFFSET(0x18D8920)
#define ABC_UI_MONOSKILLWHEELRINGPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18D88A0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoSkillWheelRingPanel_TypeDefinitionIndex = 1400;

	class MonoSkillWheelRingPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxCount; // 0x20
		::System::Single StartAngle; // 0x24
		::System::Single EndAngle; // 0x28
		::System::Single Radius; // 0x2C
		::System::Int32 E76CE3632CF373A3; // 0x30
		::System::Byte _padding0[0x4];
		::ABC::UI::MonoPrefabLoader* ItemLoader; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F078F34D48FF79D7; // 0x40

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKILLWHEELRINGPANEL_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Int32 FA9CB5B0F71D3C4B()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKILLWHEELRINGPANEL_FA9CB5B0F71D3C4B_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKILLWHEELRINGPANEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F0A70AE06A22207E()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKILLWHEELRINGPANEL_F0A70AE06A22207E_OFFSET))(this);
		}

		::System::Void B832885353A87896(::System::Int32 A70E5C58B2C7A692)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOSKILLWHEELRINGPANEL_B832885353A87896_OFFSET))(this, A70E5C58B2C7A692);
		}
	};
}
