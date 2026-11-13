#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CCMLHBNNEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x173972D0)
#define CCMLHBNNEGG_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x17397170)
#define CCMLHBNNEGG_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x173971E0)

inline static constexpr unsigned int CCMLHBNNEGG_TypeDefinitionIndex = 74971;

	class CCMLHBNNEGG : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Button* MKIJAAIAIOB; // 0x18
		::UnityEngine::UI::Button* KBPPAEMBDFN; // 0x20
		::UnityEngine::Transform* HBFGLBPANNP; // 0x28
		::UnityEngine::UI::Button* KGNBGFLCEDB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMLHBNNEGG_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMLHBNNEGG_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMLHBNNEGG_JCKGONAAIPB_OFFSET))(this);
		}

	};
