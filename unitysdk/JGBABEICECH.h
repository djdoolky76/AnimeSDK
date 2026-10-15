#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define JGBABEICECH_CTOR_OFFSET UNITYSDK_OFFSET(0x16649600)
#define JGBABEICECH_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x166495B0)
#define JGBABEICECH_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x16649490)

inline static constexpr unsigned int JGBABEICECH_TypeDefinitionIndex = 72819;

	class JGBABEICECH : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Text* EFDOLJLHGNG; // 0x18
		::UnityEngine::UI::Button* ODBHKKIJNEK; // 0x20
		::UnityEngine::UI::Button* FPNIIGOJKGG; // 0x28
		::UnityEngine::UI::Text* CEPGGFOJNCC; // 0x30
		::UnityEngine::UI::Text* APBADKAOJPH; // 0x38
		::UnityEngine::UI::Text* MIKHNILLLCK; // 0x40
		::UnityEngine::UI::Button* GJINCGEJDAG; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBABEICECH_CTOR_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBABEICECH_JCKGONAAIPB_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBABEICECH_IAMCNOAAALI_OFFSET))(this);
		}

	};
