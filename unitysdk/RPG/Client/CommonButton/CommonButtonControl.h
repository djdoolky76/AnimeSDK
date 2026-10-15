#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class KCFGMKGNMNP;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA60B0)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xCBA56B0)

namespace RPG::Client::CommonButton
{
	inline static constexpr unsigned int CommonButtonControl_TypeDefinitionIndex = 81244;

	class CommonButtonControl
	{
	public:
		::RPG::Client::AnimatorButton* _Button; // 0x70
		::System::Boolean _KeepPrefabIcon; // 0x78
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Image* _Icon; // 0x80
		::System::Boolean _KeepPrefabLabel; // 0x88
		::System::Byte _padding1[0x7];
		::RPG::Client::LocalizedText* _Label; // 0x90
		::UnityEngine::Transform* _RedDot; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
