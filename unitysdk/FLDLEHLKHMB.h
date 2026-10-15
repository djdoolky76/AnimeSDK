#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define FLDLEHLKHMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1582D560)
#define FLDLEHLKHMB_HFMMICLIFNB_OFFSET UNITYSDK_OFFSET(0x1582D650)
#define FLDLEHLKHMB_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1582D510)
#define FLDLEHLKHMB_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x1582D570)

inline static constexpr unsigned int FLDLEHLKHMB_TypeDefinitionIndex = 72794;

	class FLDLEHLKHMB : public ::LBAMBIMMJKB
	{
	public:
		::RPG::Client::UIValueChangeAnimation* CGDBLHEPDNN; // 0x18
		::RPG::Client::UIValueChangeAnimation* MKCIKOAKEBB; // 0x20
		::UnityEngine::UI::RawImage* NEECNLPLKJG; // 0x28
		::UnityEngine::RectTransform* KGIPEFKJMHP; // 0x30
		::RPG::Client::UIMeta* FGACGGHECGO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDLEHLKHMB_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDLEHLKHMB_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDLEHLKHMB_JCKGONAAIPB_OFFSET))(this);
		}

		::RPG::Client::UIValueChangeAnimation* HFMMICLIFNB(::RPG::GameCore::FrameCaptureFadeoutType a1)
		{
			return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID, ::RPG::GameCore::FrameCaptureFadeoutType))((::PBYTE)hIl2Cpp + FLDLEHLKHMB_HFMMICLIFNB_OFFSET))(this, a1);
		}

	};
