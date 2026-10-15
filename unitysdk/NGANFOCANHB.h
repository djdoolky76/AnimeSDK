#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define NGANFOCANHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9AE50)
#define NGANFOCANHB_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBB9AD40)
#define NGANFOCANHB_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xBB9ADB0)

inline static constexpr unsigned int NGANFOCANHB_TypeDefinitionIndex = 72328;

	class NGANFOCANHB : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Text* DDFDOBAACDC; // 0x18
		::UnityEngine::UI::Text* OHECLMGMKJL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGANFOCANHB_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGANFOCANHB_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGANFOCANHB_JCKGONAAIPB_OFFSET))(this);
		}

	};
