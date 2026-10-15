#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class MonoAboveSwitch; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define GDGKGOGKPCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1599C340)
#define GDGKGOGKPCG_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1599C270)
#define GDGKGOGKPCG_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x1599C2C0)

	class GDGKGOGKPCG : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Image* FPADKHELMCF; // 0x18
		::RPG::Client::MonoAboveSwitch* KFEAFKFADDM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKGOGKPCG_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKGOGKPCG_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKGOGKPCG_JCKGONAAIPB_OFFSET))(this);
		}

	};
