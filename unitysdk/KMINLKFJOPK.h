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

#define KMINLKFJOPK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDA79A0)
#define KMINLKFJOPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA7990)
#define KMINLKFJOPK_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBDA74B0)
#define KMINLKFJOPK_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xBDA7540)

inline static constexpr unsigned int KMINLKFJOPK_TypeDefinitionIndex = 74436;

	class KMINLKFJOPK : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* CPOOIMGAPOC; // 0x18
		::UnityEngine::UI::Text* NOKLBNMJBDN; // 0x20
		::UnityEngine::Animation* NEPCECJCCDA; // 0x28
		::UnityEngine::Transform* JEOGNDCPKNK; // 0x30
		::RPG::Client::MonoInControlButton* OJJMBEGFKBN; // 0x38
		::UnityEngine::UI::Button* FBCDGDDKKHC; // 0x40
		::RPG::Client::HPBar* EJLNOEPHIML; // 0x48
		::UnityEngine::UI::Image* OOLEAPLDIEA; // 0x50
		::UnityEngine::Transform* GCODHDLEPFJ; // 0x58
		::UnityEngine::Animation* OBPCDNEJFMA; // 0x60
		::UnityEngine::Transform* IMOFKIGMDIC; // 0x68
		::UnityEngine::Animation* AGHOAIIFPDA; // 0x70
		::UnityEngine::UI::Text* MJKDDBJEPGC; // 0x78
		::RPG::Client::LongPressEvent* EGDELDMIPDH; // 0x80
		::UnityEngine::Transform* LMAHPPFLOBK; // 0x88
		::UnityEngine::Transform* LDCEFCMPGGP; // 0x90
		::UnityEngine::UI::Image* PCNKKCKPFAD; // 0x98
		::UnityEngine::UI::Image* PMIBINOLNCM; // 0xA0
		::RPG::Client::LongPressEvent* MJBIBAFGKJG; // 0xA8
		::UnityEngine::UI::Button* BMJOOILCNJA; // 0xB0
		::UnityEngine::Transform* DIFDJEGHOKP; // 0xB8
		::UnityEngine::Transform* ELPJNCLJLEO; // 0xC0
		::UnityEngine::UI::Image* FGOGHPDCIHG; // 0xC8
		::UnityEngine::Transform* EDFGFOBDPDE; // 0xD0
		::UnityEngine::Animation* PMKEBONPGAB; // 0xD8
		::RPG::Client::HPBar* IFOCBEIHFCJ; // 0xE0
		::UnityEngine::Transform* LDAOBOPBHFA; // 0xE8
		::UnityEngine::Transform* DOEKALMGPAO; // 0xF0
		::UnityEngine::Animation* NEEAGGOCBGE; // 0xF8
		::RPG::Client::MonoInControlTip* DIHLKNEJKEI; // 0x100
		::UnityEngine::UI::Button* LAHOOFIEBKF; // 0x108
		::UnityEngine::Transform* MBOIEOJKFLD; // 0x110
		::UnityEngine::Transform* HIIHIIDALBO; // 0x118
		static ::System::String** StaticGet_DJCBDJMACFH()
		{
			return (::System::String**)UnitySDK::FromName("", "KMINLKFJOPK")->GetStaticField(0x58D70);
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
