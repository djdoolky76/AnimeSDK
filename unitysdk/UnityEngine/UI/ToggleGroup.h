#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Toggle; }

#define UNITYENGINE_UI_TOGGLEGROUP_A61C40E5F39B0B36_OFFSET UNITYSDK_OFFSET(0x43AA610)
#define UNITYENGINE_UI_TOGGLEGROUP_AB83FEAD2CFFA3F4_OFFSET UNITYSDK_OFFSET(0x43AA090)
#define UNITYENGINE_UI_TOGGLEGROUP_B07D3545A44494A1_OFFSET UNITYSDK_OFFSET(0x43AA5A0)
#define UNITYENGINE_UI_TOGGLEGROUP_B85C2B00D245BEB1_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define UNITYENGINE_UI_TOGGLEGROUP_BD378E4AC1338A1E_OFFSET UNITYSDK_OFFSET(0x43AA910)
#define UNITYENGINE_UI_TOGGLEGROUP_BE92C697C0028456_OFFSET UNITYSDK_OFFSET(0x43AAAA0)
#define UNITYENGINE_UI_TOGGLEGROUP_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x43AA880)
#define UNITYENGINE_UI_TOGGLEGROUP_BF7BD27666F1BA02_OFFSET UNITYSDK_OFFSET(0x43A9F40)
#define UNITYENGINE_UI_TOGGLEGROUP_E892C13A5F6A5217_OFFSET UNITYSDK_OFFSET(0x43AA890)
#define UNITYENGINE_UI_TOGGLEGROUP_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x43AA880)
#define UNITYENGINE_UI_TOGGLEGROUP_F58272E8E28505A5_OFFSET UNITYSDK_OFFSET(0x43AAA20)
#define UNITYENGINE_UI_TOGGLEGROUP_F81D06E037877E1A_OFFSET UNITYSDK_OFFSET(0x43A9E30)
#define UNITYENGINE_UI_TOGGLEGROUP_FD69656A2CC370E5_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define UNITYENGINE_UI_TOGGLEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x43AABF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ToggleGroup_TypeDefinitionIndex = 18570;

	class ToggleGroup : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Boolean m_AllowSwitchOff; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>* F4828C229F4F1824; // 0x28

		::System::Void BE92C697C0028456(::UnityEngine::UI::Toggle* E4C5464C93F5A644)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_BE92C697C0028456_OFFSET))(this, E4C5464C93F5A644);
		}

		::System::Void F58272E8E28505A5(::UnityEngine::UI::Toggle* E4C5464C93F5A644)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F58272E8E28505A5_OFFSET))(this, E4C5464C93F5A644);
		}

		::System::Void AB83FEAD2CFFA3F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_AB83FEAD2CFFA3F4_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Toggle* B07D3545A44494A1()
		{
			return ((::UnityEngine::UI::Toggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_B07D3545A44494A1_OFFSET))(this);
		}

		::System::Void BD378E4AC1338A1E(::System::Boolean E9C09E61C2B0C943)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_BD378E4AC1338A1E_OFFSET))(this, E9C09E61C2B0C943);
		}

		::System::Boolean BF7BD27666F1BA02()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_BF7BD27666F1BA02_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Toggle*>* F81D06E037877E1A()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Toggle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_F81D06E037877E1A_OFFSET))(this);
		}

		::System::Void A61C40E5F39B0B36(::UnityEngine::UI::Toggle* E4C5464C93F5A644, ::System::Boolean E9C09E61C2B0C943)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_A61C40E5F39B0B36_OFFSET))(this, E4C5464C93F5A644, E9C09E61C2B0C943);
		}

		::System::Void FD69656A2CC370E5(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_FD69656A2CC370E5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean B85C2B00D245BEB1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_B85C2B00D245BEB1_OFFSET))(this);
		}

		::System::Void E892C13A5F6A5217(::UnityEngine::UI::Toggle* E4C5464C93F5A644)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLEGROUP_E892C13A5F6A5217_OFFSET))(this, E4C5464C93F5A644);
		}
	};
}
