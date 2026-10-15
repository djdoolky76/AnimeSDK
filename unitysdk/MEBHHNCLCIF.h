#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define MEBHHNCLCIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B8CB0)
#define MEBHHNCLCIF_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xB8B8AB0)
#define MEBHHNCLCIF_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xB8B8B20)

inline static constexpr unsigned int MEBHHNCLCIF_TypeDefinitionIndex = 72927;

	class MEBHHNCLCIF : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Button* ILJAPGEMAEC; // 0x18
		::UnityEngine::UI::Button* JEOIHFIIPDJ; // 0x20
		::UnityEngine::UI::Image* AJMIIBNLHNO; // 0x28
		::UnityEngine::Transform* LMHMPGIKBEB; // 0x30
		::UnityEngine::Transform* LMFBMGNCAPI; // 0x38
		::UnityEngine::UI::RawImage* GBODBEHAPCN; // 0x40
		::UnityEngine::UI::AspectRatioFitter* AFMOKBNCLKK; // 0x48
		::UnityEngine::UI::Text* OAOPDOFHOKO; // 0x50
		::UnityEngine::UI::AspectRatioFitter* BBGGMKDMDNG; // 0x58
		::UnityEngine::UI::Button* DEIHEPPPHGA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBHHNCLCIF_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBHHNCLCIF_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBHHNCLCIF_JCKGONAAIPB_OFFSET))(this);
		}

	};
