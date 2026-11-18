#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class OBFDFHGIAKP;
namespace MoleMole { class DragableRectController; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button; }

#define MOLEMOLE_SKILLBUTTONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x14BC3780)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONBUTTONDISABLED_OFFSET UNITYSDK_OFFSET(0x14BC3E90)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14BC3BC0)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x14BC3C90)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x14BC3A30)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x14BC3AE0)
#define MOLEMOLE_SKILLBUTTONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14BC3D40)
#define MOLEMOLE_SKILLBUTTONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC3F20)

namespace MoleMole
{
	inline static constexpr unsigned int SkillButtonController_TypeDefinitionIndex = 85006;

	class SkillButtonController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Button* AHBOGHMEGJN; // 0x18
		::OBFDFHGIAKP* FEEBNPHPEIC; // 0x20
		::MoleMole::DragableRectController* BBNMAGKCALM; // 0x28
		::System::Single KJCACFKKMLI; // 0x30
		::System::Single HKJDBKENHCF; // 0x34
		::System::Single FDDFJHCHKKG; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::OBFDFHGIAKP* MNLNFJLOABN)
		{
			return ((::System::Void(*)(::PVOID, ::OBFDFHGIAKP*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_INIT_OFFSET))(this, MNLNFJLOABN);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnButtonDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTROLLER_ONBUTTONDISABLED_OFFSET))(this);
		}
	};
}
