#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class BoxCollider2D; }

#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x16EB1EE0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x16EB1F20)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_NPEIDLJPIGO_OFFSET UNITYSDK_OFFSET(0x16EB1D20)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_ONAFTERAPPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x16EB1AD0)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0x16EB1F30)
#define MOLEMOLE_UIBOXCOLLIDER2DADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB1F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBoxCollider2DAdapter_TypeDefinitionIndex = 42002;

	class UIBoxCollider2DAdapter : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::BoxCollider2D* GNPEKBPDKAK; // 0x18
		::System::Boolean _BDHEABNOPDF_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterApplyLayoutByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_ONAFTERAPPLYLAYOUTBYPLATFORM_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_CALCULATELAYOUT_OFFSET))(this);
		}

		::System::Boolean get_Pause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_GET_PAUSE_OFFSET))(this);
		}

		::System::Void set_Pause(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_SET_PAUSE_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::BoxCollider2D* NPEIDLJPIGO()
		{
			return ((::UnityEngine::BoxCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOXCOLLIDER2DADAPTER_NPEIDLJPIGO_OFFSET))(this);
		}
	};
}
