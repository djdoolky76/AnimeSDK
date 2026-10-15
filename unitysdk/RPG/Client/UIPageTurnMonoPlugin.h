#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Paper; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIPAGETURNMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE3E36C0)

namespace RPG::Client
{
	class UIPageTurnMonoPlugin
	{
	public:
		::UnityEngine::RectTransform* BookPanel; // 0x30
		::UnityEngine::UI::Image* ClippingPlane; // 0x38
		::UnityEngine::UI::Image* Shadow; // 0x40
		::UnityEngine::UI::Image* LeftPageShadow; // 0x48
		::UnityEngine::UI::Image* RightPageShadow; // 0x50
		::UnityEngine::UI::Image* ShadowLTR; // 0x58
		::UnityEngine::RectTransform* LeftPageTransform; // 0x60
		::UnityEngine::RectTransform* RightPageTransform; // 0x68
		::System::Int32 dynamicShadowWidth; // 0x70
		::System::Boolean interactable; // 0x74
		::System::Boolean enableShadowEffect; // 0x75
		::System::Boolean hasTransparentPages; // 0x76
		::System::Byte _padding0[0x1];
		::System::Int32 currentPaper; // 0x78
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::Client::Paper*>* papers; // 0x80
		::UnityEngine::Events::UnityEvent* OnFlip; // 0x88
		::UnityEngine::Events::UnityEvent* OnFlipPrevious; // 0x90
		::UnityEngine::Events::UnityEvent* OnFlipNext; // 0x98
		::System::Int32 StartFlippingPaper; // 0xA0
		::System::Int32 endFlippingPaper; // 0xA4
		::Il2CppArray<::UnityEngine::GameObject*>* pages; // 0xA8
		::Il2CppArray<::System::Int32>* usedIndices; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
