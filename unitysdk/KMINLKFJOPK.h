#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class HPBar; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define KMINLKFJOPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x18F7B4A0)
#define KMINLKFJOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x18F7B490)
#define KMINLKFJOPK_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x18F7AFB0)
#define KMINLKFJOPK_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x18F7B040)

inline static constexpr unsigned int KMINLKFJOPK_TypeDefinitionIndex = 74435;

	class KMINLKFJOPK : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Button* BMJOOILCNJA; // 0x18
		::UnityEngine::Animation* OBPCDNEJFMA; // 0x20
		::UnityEngine::Animation* AGHOAIIFPDA; // 0x28
		::RPG::Client::HPBar* EJLNOEPHIML; // 0x30
		::UnityEngine::UI::Button* FBCDGDDKKHC; // 0x38
		::UnityEngine::Transform* LMAHPPFLOBK; // 0x40
		::RPG::Client::MonoInControlTip* DIHLKNEJKEI; // 0x48
		::UnityEngine::Animation* NEPCECJCCDA; // 0x50
		::UnityEngine::UI::Text* MJKDDBJEPGC; // 0x58
		::UnityEngine::Transform* DIFDJEGHOKP; // 0x60
		::RPG::Client::LongPressEvent* EGDELDMIPDH; // 0x68
		::UnityEngine::Transform* CPOOIMGAPOC; // 0x70
		::UnityEngine::Transform* LDAOBOPBHFA; // 0x78
		::RPG::Client::MonoInControlButton* OJJMBEGFKBN; // 0x80
		::UnityEngine::UI::Image* PMIBINOLNCM; // 0x88
		::UnityEngine::Transform* MBOIEOJKFLD; // 0x90
		::UnityEngine::Transform* IMOFKIGMDIC; // 0x98
		::UnityEngine::UI::Button* LAHOOFIEBKF; // 0xA0
		::UnityEngine::UI::Image* OOLEAPLDIEA; // 0xA8
		::UnityEngine::Transform* DOEKALMGPAO; // 0xB0
		::RPG::Client::HPBar* IFOCBEIHFCJ; // 0xB8
		::UnityEngine::Animation* PMKEBONPGAB; // 0xC0
		::RPG::Client::LongPressEvent* MJBIBAFGKJG; // 0xC8
		::UnityEngine::Transform* HIIHIIDALBO; // 0xD0
		::UnityEngine::Transform* ELPJNCLJLEO; // 0xD8
		::UnityEngine::Transform* JEOGNDCPKNK; // 0xE0
		::UnityEngine::Transform* EDFGFOBDPDE; // 0xE8
		::UnityEngine::UI::Image* PCNKKCKPFAD; // 0xF0
		::UnityEngine::Transform* LDCEFCMPGGP; // 0xF8
		::UnityEngine::Animation* NEEAGGOCBGE; // 0x100
		::UnityEngine::UI::Text* NOKLBNMJBDN; // 0x108
		::UnityEngine::Transform* GCODHDLEPFJ; // 0x110
		::UnityEngine::UI::Image* FGOGHPDCIHG; // 0x118
		static ::System::String** StaticGet_DJCBDJMACFH()
		{
			return (::System::String**)UnitySDK::FromName("", "KMINLKFJOPK")->GetStaticField(0x68270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMINLKFJOPK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMINLKFJOPK_CCTOR_OFFSET))();
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMINLKFJOPK_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMINLKFJOPK_JCKGONAAIPB_OFFSET))(this);
		}

	};
