#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_MASK_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x43D07A0)
#define UNITYENGINE_UI_MASK_A67F5FA59CD91E7E_OFFSET UNITYSDK_OFFSET(0x43D0E20)
#define UNITYENGINE_UI_MASK_A81537C668B03945_OFFSET UNITYSDK_OFFSET(0x43D0DB0)
#define UNITYENGINE_UI_MASK_A946125880BE6306_OFFSET UNITYSDK_OFFSET(0x1925A40)
#define UNITYENGINE_UI_MASK_B7E5C40DD527E475_OFFSET UNITYSDK_OFFSET(0x43D05F0)
#define UNITYENGINE_UI_MASK_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x43D0B10)
#define UNITYENGINE_UI_MASK_E47A1D9A56B4BFB0_OFFSET UNITYSDK_OFFSET(0x43D02E0)
#define UNITYENGINE_UI_MASK_EE66872CF3A76681_OFFSET UNITYSDK_OFFSET(0x43D0E90)
#define UNITYENGINE_UI_MASK_F019E2E46ABD1F99_OFFSET UNITYSDK_OFFSET(0x43D06E0)
#define UNITYENGINE_UI_MASK__CTOR_OFFSET UNITYSDK_OFFSET(0x43D0DA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Mask_TypeDefinitionIndex = 18687;

	class Mask : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* FD054E785293C9F8; // 0x20
		::System::Boolean m_ShowMaskGraphic; // 0x28
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Graphic* F587AC45C2E93F43; // 0x30
		::UnityEngine::Material* ADBDC409BB464172; // 0x38
		::UnityEngine::Material* F9C8656B31DFB4CC; // 0x40

		::System::Boolean B7E5C40DD527E475(::UnityEngine::Vector2 AFE1FB83320C2071, ::UnityEngine::Camera* E20C7C245327F84D)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_B7E5C40DD527E475_OFFSET))(this, AFE1FB83320C2071, E20C7C245327F84D);
		}

		::System::Void EE66872CF3A76681(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_EE66872CF3A76681_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* A67F5FA59CD91E7E()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_A67F5FA59CD91E7E_OFFSET))(this);
		}

		::UnityEngine::Material* E47A1D9A56B4BFB0(::UnityEngine::Material* E17E75EB1A257CA0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_E47A1D9A56B4BFB0_OFFSET))(this, E17E75EB1A257CA0);
		}

		::UnityEngine::UI::Graphic* A81537C668B03945()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_A81537C668B03945_OFFSET))(this);
		}

		::System::Boolean F019E2E46ABD1F99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_F019E2E46ABD1F99_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Boolean A946125880BE6306()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_A946125880BE6306_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
