#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define NJECIAHFLEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC050D0)
#define NJECIAHFLEG_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBC04C70)
#define NJECIAHFLEG_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xBC04CC0)

inline static constexpr unsigned int NJECIAHFLEG_TypeDefinitionIndex = 72923;

	class NJECIAHFLEG : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Button* JEOIHFIIPDJ; // 0x18
		::UnityEngine::UI::RawImage* JOAJLEHAHDI; // 0x20
		::UnityEngine::UI::Button* DIBBFLDNFKF; // 0x28
		::Il2CppArray<::System::Object*>* CNCABJHFCLM; // 0x30
		::UnityEngine::UI::Button* ILJAPGEMAEC; // 0x38
		::UnityEngine::Transform* LMHMPGIKBEB; // 0x40
		::UnityEngine::UI::Image* AJMIIBNLHNO; // 0x48
		::UnityEngine::UI::AspectRatioFitter* BBGGMKDMDNG; // 0x50
		::UnityEngine::GameObject* DGAFJKMJFMC; // 0x58
		::UnityEngine::UI::Button* DEIHEPPPHGA; // 0x60
		::UnityEngine::UI::AspectRatioFitter* AFMOKBNCLKK; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJECIAHFLEG_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJECIAHFLEG_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJECIAHFLEG_JCKGONAAIPB_OFFSET))(this);
		}

	};
