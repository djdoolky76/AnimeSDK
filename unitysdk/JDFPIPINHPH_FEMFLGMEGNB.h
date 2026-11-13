#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define JDFPIPINHPH_FEMFLGMEGNB_CTOR_OFFSET UNITYSDK_OFFSET(0x169889F0)
#define JDFPIPINHPH_FEMFLGMEGNB_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x16988900)
#define JDFPIPINHPH_FEMFLGMEGNB_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x16988950)

inline static constexpr unsigned int JDFPIPINHPH_FEMFLGMEGNB_TypeDefinitionIndex = 74879;

	class JDFPIPINHPH_FEMFLGMEGNB : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* JCEEJLHEGIG; // 0x18
		::UnityEngine::CanvasGroup* LHFEMKIHPLH; // 0x20
		::RPG::Client::LocalizedText* IEOMBELGGFD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_FEMFLGMEGNB_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_FEMFLGMEGNB_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_FEMFLGMEGNB_JCKGONAAIPB_OFFSET))(this);
		}

	};
