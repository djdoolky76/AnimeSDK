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

#define MEBHHNCLCIF_CTOR_OFFSET UNITYSDK_OFFSET(0xC16A6B0)
#define MEBHHNCLCIF_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xC16A4B0)
#define MEBHHNCLCIF_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xC16A520)

inline static constexpr unsigned int MEBHHNCLCIF_TypeDefinitionIndex = 75037;

	class MEBHHNCLCIF : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Image* AJMIIBNLHNO; // 0x18
		::UnityEngine::UI::RawImage* GBODBEHAPCN; // 0x20
		::UnityEngine::UI::AspectRatioFitter* BBGGMKDMDNG; // 0x28
		::UnityEngine::UI::Button* DEIHEPPPHGA; // 0x30
		::UnityEngine::UI::AspectRatioFitter* AFMOKBNCLKK; // 0x38
		::UnityEngine::UI::Text* OAOPDOFHOKO; // 0x40
		::UnityEngine::UI::Button* JEOIHFIIPDJ; // 0x48
		::UnityEngine::Transform* LMFBMGNCAPI; // 0x50
		::UnityEngine::Transform* LMHMPGIKBEB; // 0x58
		::UnityEngine::UI::Button* ILJAPGEMAEC; // 0x60
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
