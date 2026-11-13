#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define HDEPIHNOOHF_CJFDCDHGDDM_OFFSET UNITYSDK_OFFSET(0x1B7C62F0)
#define HDEPIHNOOHF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7C61C0)
#define HDEPIHNOOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C63A0)
#define HDEPIHNOOHF_GET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B7C6380)
#define HDEPIHNOOHF_IECGFFIHLMC_OFFSET UNITYSDK_OFFSET(0x1B7C6290)
#define HDEPIHNOOHF_SET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B7C6390)

inline static constexpr unsigned int HDEPIHNOOHF_TypeDefinitionIndex = 74871;

	class HDEPIHNOOHF : public ::System::Object
	{
	public:
		::RPG::Client::UIMeta* FGACGGHECGO; // 0x10
		::UnityEngine::RenderTexture* _CaptureTexture_k__BackingField; // 0x18
		::RPG::Client::UIValueChangeAnimation* MKNKLKMHLBB; // 0x20
		::System::Action* COJINAIKIID; // 0x28
		::UnityEngine::UI::RawImage* LLEBFFLOKFK; // 0x30
		::System::Single MNEMEGANFBD; // 0x38
		::RPG::GameCore::FrameCaptureFadeoutType PFNGCIBCAAN; // 0x3C
		::System::Single HLMHCCCJFBA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPIHNOOHF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPIHNOOHF_CLEAR_OFFSET))(this);
		}

		::System::Void CJFDCDHGDDM(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + HDEPIHNOOHF_CJFDCDHGDDM_OFFSET))(this, a1);
		}

		::System::Void IECGFFIHLMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPIHNOOHF_IECGFFIHLMC_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_CaptureTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEPIHNOOHF_GET_CAPTURETEXTURE_OFFSET))(this);
		}

		::System::Void set_CaptureTexture(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + HDEPIHNOOHF_SET_CAPTURETEXTURE_OFFSET))(this, a1);
		}

	};
