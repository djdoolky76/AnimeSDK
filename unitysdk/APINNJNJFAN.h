#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define APINNJNJFAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BAC3A0)
#define APINNJNJFAN_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x15BAC1B0)
#define APINNJNJFAN_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x15BAC220)

	class APINNJNJFAN : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* KEIJDLAJACI; // 0x18
		::UnityEngine::UI::Text* LKCIAKNBFHI; // 0x20
		::UnityEngine::UI::Button* KJHBCOIMIFE; // 0x28
		::UnityEngine::UI::Button* IIIAIOOCLJP; // 0x30
		::UnityEngine::Transform* DPNJJEGDNLH; // 0x38
		::RPG::Client::AnimatorButton* CGAFCBJFCNJ; // 0x40
		::UnityEngine::Transform* KFJIBBNMHPO; // 0x48
		::UnityEngine::UI::Text* FOEMNCNIHON; // 0x50
		::UnityEngine::UI::Text* BBIONBFBBHJ; // 0x58
		::UnityEngine::UI::Button* IGBPFIMJACI; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APINNJNJFAN_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APINNJNJFAN_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APINNJNJFAN_JCKGONAAIPB_OFFSET))(this);
		}

	};
