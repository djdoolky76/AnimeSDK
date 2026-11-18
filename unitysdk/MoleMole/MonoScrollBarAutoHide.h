#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18103DD0)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_1_OFFSET UNITYSDK_OFFSET(0x18104030)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x18103F90)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18103ED0)
#define MOLEMOLE_MONOSCROLLBARAUTOHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18104220)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollBarAutoHide_TypeDefinitionIndex = 70837;

	class MonoScrollBarAutoHide : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean KCOMBBJJLLK; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x20
		::System::Single KLEOJGBBHGH; // 0x28
		::System::Single fadeOutTimeSpan; // 0x2C
		::System::Boolean hidebyDefault; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateStatus(::System::Single FMJGOHNLJNA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_OFFSET))(this, FMJGOHNLJNA);
		}

		::System::Void UpdateStatus_1(::System::Boolean MBJDMKCGOCK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBARAUTOHIDE_UPDATESTATUS_1_OFFSET))(this, MBJDMKCGOCK);
		}
	};
}
