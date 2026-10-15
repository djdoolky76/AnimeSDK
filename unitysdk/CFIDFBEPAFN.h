#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CFIDFBEPAFN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4E320)
#define CFIDFBEPAFN_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xCC4E240)
#define CFIDFBEPAFN_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xCC4E290)

inline static constexpr unsigned int CFIDFBEPAFN_TypeDefinitionIndex = 72486;

	class CFIDFBEPAFN : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::RectTransform* GMIHBHIFIJF; // 0x18
		::UnityEngine::RectTransform* ADDAFGMEKBJ; // 0x20
		::UnityEngine::RectTransform* AJJDFOMKAGF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDFBEPAFN_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDFBEPAFN_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDFBEPAFN_JCKGONAAIPB_OFFSET))(this);
		}

	};
