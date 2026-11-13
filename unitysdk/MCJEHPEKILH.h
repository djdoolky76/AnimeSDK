#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }

#define MCJEHPEKILH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8481F0)
#define MCJEHPEKILH_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1B8480C0)
#define MCJEHPEKILH_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x1B848130)

inline static constexpr unsigned int MCJEHPEKILH_TypeDefinitionIndex = 74981;

	class MCJEHPEKILH : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Dropdown* GMHDIGJLLCG; // 0x18
		::UnityEngine::UI::Dropdown* BAOGDOFPPLN; // 0x20
		::UnityEngine::UI::Button* DAGDACJKKCN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJEHPEKILH_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJEHPEKILH_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJEHPEKILH_JCKGONAAIPB_OFFSET))(this);
		}

	};
