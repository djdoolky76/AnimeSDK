#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ScrollRect.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_AUTOSCROLLRECT_CTOR_OFFSET UNITYSDK_OFFSET(0xC6C6C40)
#define RPG_CLIENT_AUTOSCROLLRECT_NBMOPGJNFGK_OFFSET UNITYSDK_OFFSET(0xC6C6310)
#define RPG_CLIENT_AUTOSCROLLRECT_NKGKCNKEDEF_OFFSET UNITYSDK_OFFSET(0xC6C6620)
#define RPG_CLIENT_AUTOSCROLLRECT_SETITEMSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC6C6360)
#define RPG_CLIENT_AUTOSCROLLRECT_SNAPTO_OFFSET UNITYSDK_OFFSET(0xC6C6690)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoScrollRect_TypeDefinitionIndex = 72505;

	class AutoScrollRect : public ::UnityEngine::UI::ScrollRect
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* ANCCPEPECNA; // 0x188
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_CTOR_OFFSET))(this);
		}

		::System::Void NBMOPGJNFGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_NBMOPGJNFGK_OFFSET))(this);
		}

		::System::Void SetItemSelectCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_SETITEMSELECTCALLBACK_OFFSET))(this);
		}

		::System::Void NKGKCNKEDEF(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_NKGKCNKEDEF_OFFSET))(this, a1);
		}

		::System::Void SnapTo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_SNAPTO_OFFSET))(this, a1);
		}

	};
}
