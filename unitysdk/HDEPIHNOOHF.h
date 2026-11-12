#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define HDEPIHNOOHF_CJFDCDHGDDM_OFFSET UNITYSDK_OFFSET(0x16B76000)
#define HDEPIHNOOHF_CLEAR_OFFSET UNITYSDK_OFFSET(0x16B75EC0)
#define HDEPIHNOOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x16B760B0)
#define HDEPIHNOOHF_GET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x16B76090)
#define HDEPIHNOOHF_IECGFFIHLMC_OFFSET UNITYSDK_OFFSET(0x16B75FA0)
#define HDEPIHNOOHF_SET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x16B760A0)

inline static constexpr unsigned int HDEPIHNOOHF_TypeDefinitionIndex = 74872;

	class HDEPIHNOOHF : public ::System::Object
	{
	public:
		::UnityEngine::UI::RawImage* LLEBFFLOKFK; // 0x10
		::System::Action* COJINAIKIID; // 0x18
		::UnityEngine::RenderTexture* _CaptureTexture_k__BackingField; // 0x20
		::RPG::Client::UIValueChangeAnimation* MKNKLKMHLBB; // 0x28
		::RPG::Client::UIMeta* FGACGGHECGO; // 0x30
		::System::Single MNEMEGANFBD; // 0x38
		::System::Single HLMHCCCJFBA; // 0x3C
		::RPG::GameCore::FrameCaptureFadeoutType PFNGCIBCAAN; // 0x40
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
