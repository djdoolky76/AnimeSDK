#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class MEAFKINAELF;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_RESBAR_RESBARITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDEBAB10)
#define RPG_CLIENT_RESBAR_RESBARITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDEB95D0)

namespace RPG::Client::ResBar
{
	inline static constexpr unsigned int ResBarItemControl_TypeDefinitionIndex = 79142;

	class ResBarItemControl
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x70
		::RPG::Client::LocalizedText* _CountText; // 0x78
		::RPG::Client::AnimatorButton* _BtnDetail; // 0x80
		::UnityEngine::Transform* _BtnPlus; // 0x88
		::UnityEngine::Transform* _Splash; // 0x90
		::RPG::Client::LocalizedText* _TotalNumText; // 0x98
		::UnityEngine::Transform* _MaxTip; // 0xA0
		::UnityEngine::Transform* _MaxEffect; // 0xA8
		::RPG::UINavigation::UINavigationButton* _NavigationButton; // 0xB0
		::UnityEngine::Transform* _KeyMapInfo; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_RESBARITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_RESBARITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
