#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EGOPIPPJKPL;
namespace MoleMole { class MonoUIInteractGroup; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOUIINTERACT_AWAKE_OFFSET UNITYSDK_OFFSET(0x135C0D60)
#define MOLEMOLE_MONOUIINTERACT_GHEOJDPBNDL_OFFSET UNITYSDK_OFFSET(0x135C1170)
#define MOLEMOLE_MONOUIINTERACT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x135C10E0)
#define MOLEMOLE_MONOUIINTERACT_UPDATE_OFFSET UNITYSDK_OFFSET(0x135C1080)
#define MOLEMOLE_MONOUIINTERACT_WORLDTOUGUIPOSITION_OFFSET UNITYSDK_OFFSET(0x135C0EF0)
#define MOLEMOLE_MONOUIINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x135C1120)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIInteract_TypeDefinitionIndex = 73340;

	class MonoUIInteract : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 interactID; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* root; // 0x20
		::EGOPIPPJKPL* template_; // 0x28
		::UnityEngine::UI::Extension::UIButtonEx* DNLDJKDCCEP; // 0x30
		::MoleMole::MonoUIInteractGroup* KPNIHKEKDOC; // 0x38
		::System::Single HLMJGDACAOA; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_AWAKE_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 WorldToUGUIPosition(::UnityEngine::RectTransform* OOIGNEBBHJN, ::UnityEngine::Camera* KONLMDBCDCK, ::UnityEngine::Vector3 ILLAACIBJNC)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_WORLDTOUGUIPOSITION_OFFSET))(OOIGNEBBHJN, KONLMDBCDCK, ILLAACIBJNC);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_ONDESTROY_OFFSET))(this);
		}

		::System::Void GHEOJDPBNDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACT_GHEOJDPBNDL_OFFSET))(this);
		}
	};
}
