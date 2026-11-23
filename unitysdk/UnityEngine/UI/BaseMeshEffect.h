#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_BASEMESHEFFECT_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x4394660)
#define UNITYENGINE_UI_BASEMESHEFFECT_A725A1972CAF87FB_OFFSET UNITYSDK_OFFSET(0x43944C0)
#define UNITYENGINE_UI_BASEMESHEFFECT_A81537C668B03945_OFFSET UNITYSDK_OFFSET(0x43947A0)
#define UNITYENGINE_UI_BASEMESHEFFECT_B8A230541D293541_OFFSET UNITYSDK_OFFSET(0x43945C0)
#define UNITYENGINE_UI_BASEMESHEFFECT_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x4394700)
#define UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseMeshEffect_TypeDefinitionIndex = 18548;

	class BaseMeshEffect : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::UI::Graphic* F587AC45C2E93F43; // 0x20

		::System::Void A725A1972CAF87FB(::UnityEngine::Mesh* FF762A0FE86505A5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_A725A1972CAF87FB_OFFSET))(this, FF762A0FE86505A5);
		}

		::UnityEngine::UI::Graphic* A81537C668B03945()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_A81537C668B03945_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void B8A230541D293541()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEMESHEFFECT_B8A230541D293541_OFFSET))(this);
		}
	};
}
