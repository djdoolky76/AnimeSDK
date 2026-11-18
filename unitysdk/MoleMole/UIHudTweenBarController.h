#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class TweenBar; }

#define MOLEMOLE_UIHUDTWEENBARCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196C9330)
#define MOLEMOLE_UIHUDTWEENBARCONTROLLER_REFRESHBARVIEW_OFFSET UNITYSDK_OFFSET(0x196C9770)
#define MOLEMOLE_UIHUDTWEENBARCONTROLLER_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x196C9380)
#define MOLEMOLE_UIHUDTWEENBARCONTROLLER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x196C9500)
#define MOLEMOLE_UIHUDTWEENBARCONTROLLER_SETVALUEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x196C9560)
#define MOLEMOLE_UIHUDTWEENBARCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196C9AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHudTweenBarController_TypeDefinitionIndex = 57852;

	class UIHudTweenBarController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single UpdateBarTimer; // 0x18
		::System::Single UpdateDelayTimer; // 0x1C
		::MoleMole::TweenBar* ImgBar; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHUDTWEENBARCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHUDTWEENBARCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetupView(::System::Single MGHAEHNKIMC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHUDTWEENBARCONTROLLER_SETUPVIEW_OFFSET))(this, MGHAEHNKIMC);
		}

		::System::Void SetValueImmediately(::System::Single MGHAEHNKIMC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHUDTWEENBARCONTROLLER_SETVALUEIMMEDIATELY_OFFSET))(this, MGHAEHNKIMC);
		}

		::System::Void SetCurrentValueToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHUDTWEENBARCONTROLLER_SETCURRENTVALUETOEND_OFFSET))(this);
		}

		::System::Void RefreshBarView(::System::Single MGHAEHNKIMC, ::System::Boolean NDJEOIKLMDC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHUDTWEENBARCONTROLLER_REFRESHBARVIEW_OFFSET))(this, MGHAEHNKIMC, NDJEOIKLMDC);
		}
	};
}
