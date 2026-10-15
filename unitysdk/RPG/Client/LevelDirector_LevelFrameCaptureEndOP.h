#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP_CTOR_OFFSET UNITYSDK_OFFSET(0xD390740)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP_ONFRAMECAPTUREEND_OFFSET UNITYSDK_OFFSET(0xD3907B0)

namespace RPG::Client
{
	class LevelDirector_LevelFrameCaptureEndOP : public ::System::Object
	{
	public:
		::UnityEngine::UI::RawImage* RTOwner; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP_CTOR_OFFSET))(this);
		}

		::System::Void OnFrameCaptureEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMECAPTUREENDOP_ONFRAMECAPTUREEND_OFFSET))(this);
		}

	};
}
