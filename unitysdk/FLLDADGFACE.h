#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define FLLDADGFACE_CTOR_OFFSET UNITYSDK_OFFSET(0x167AECE0)
#define FLLDADGFACE_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x167AEC70)
#define FLLDADGFACE_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x167AEBB0)

inline static constexpr unsigned int FLLDADGFACE_TypeDefinitionIndex = 75311;

	class FLLDADGFACE : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Text* LHHEHGDLADI; // 0x18
		::UnityEngine::UI::Text* OLMCLMFOIGB; // 0x20
		::UnityEngine::UI::SmoothMask* LELDAGOEEHC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLDADGFACE_CTOR_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLDADGFACE_JCKGONAAIPB_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLDADGFACE_IAMCNOAAALI_OFFSET))(this);
		}

	};
