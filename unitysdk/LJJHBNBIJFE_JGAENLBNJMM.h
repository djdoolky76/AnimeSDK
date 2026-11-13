#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ManaVideoPlayer; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class RawImage; }

#define LJJHBNBIJFE_JGAENLBNJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x18CBB6D0)
#define LJJHBNBIJFE_JGAENLBNJMM_GET_ASPECTRATIOFITTER_OFFSET UNITYSDK_OFFSET(0x18CBB720)
#define LJJHBNBIJFE_JGAENLBNJMM_GET_CANVASGROUP_OFFSET UNITYSDK_OFFSET(0x18CBB710)
#define LJJHBNBIJFE_JGAENLBNJMM_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x18CBB6F0)
#define LJJHBNBIJFE_JGAENLBNJMM_GET_RENDERTARGET_OFFSET UNITYSDK_OFFSET(0x18CBB700)

inline static constexpr unsigned int LJJHBNBIJFE_JGAENLBNJMM_TypeDefinitionIndex = 74940;

	class LJJHBNBIJFE_JGAENLBNJMM : public ::System::Object
	{
	public:
		::RPG::Client::ManaVideoPlayer* _Player_k__BackingField; // 0x10
		::UnityEngine::UI::RawImage* _RenderTarget_k__BackingField; // 0x18
		::UnityEngine::UI::AspectRatioFitter* _AspectRatioFitter_k__BackingField; // 0x20
		::UnityEngine::CanvasGroup* _CanvasGroup_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::Client::ManaVideoPlayer* a1, ::UnityEngine::UI::RawImage* a2, ::UnityEngine::CanvasGroup* a3, ::UnityEngine::UI::AspectRatioFitter* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ManaVideoPlayer*, ::UnityEngine::UI::RawImage*, ::UnityEngine::CanvasGroup*, ::UnityEngine::UI::AspectRatioFitter*))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_JGAENLBNJMM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ManaVideoPlayer* get_Player()
		{
			return ((::RPG::Client::ManaVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_JGAENLBNJMM_GET_PLAYER_OFFSET))(this);
		}

		::UnityEngine::UI::RawImage* get_RenderTarget()
		{
			return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_JGAENLBNJMM_GET_RENDERTARGET_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* get_CanvasGroup()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_JGAENLBNJMM_GET_CANVASGROUP_OFFSET))(this);
		}

		::UnityEngine::UI::AspectRatioFitter* get_AspectRatioFitter()
		{
			return ((::UnityEngine::UI::AspectRatioFitter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_JGAENLBNJMM_GET_ASPECTRATIOFITTER_OFFSET))(this);
		}

	};
