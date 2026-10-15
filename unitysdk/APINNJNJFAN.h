#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define APINNJNJFAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA0390)
#define APINNJNJFAN_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x15BA01A0)
#define APINNJNJFAN_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x15BA0210)

inline static constexpr unsigned int APINNJNJFAN_TypeDefinitionIndex = 72928;

	class APINNJNJFAN : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* DPNJJEGDNLH; // 0x18
		::UnityEngine::UI::Text* LKCIAKNBFHI; // 0x20
		::UnityEngine::UI::Button* KJHBCOIMIFE; // 0x28
		::UnityEngine::UI::Button* IGBPFIMJACI; // 0x30
		::UnityEngine::UI::Text* BBIONBFBBHJ; // 0x38
		::UnityEngine::Transform* KFJIBBNMHPO; // 0x40
		::UnityEngine::UI::Button* IIIAIOOCLJP; // 0x48
		::UnityEngine::Transform* KEIJDLAJACI; // 0x50
		::RPG::Client::AnimatorButton* CGAFCBJFCNJ; // 0x58
		::UnityEngine::UI::Text* FOEMNCNIHON; // 0x60
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
