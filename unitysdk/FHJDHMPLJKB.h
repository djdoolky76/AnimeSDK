#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define FHJDHMPLJKB_CTOR_OFFSET UNITYSDK_OFFSET(0x15780910)
#define FHJDHMPLJKB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x157808D0)
#define FHJDHMPLJKB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15780880)
#define FHJDHMPLJKB_NAVIGATIONFAILPROCESS_OFFSET UNITYSDK_OFFSET(0x15780810)
#define FHJDHMPLJKB_PLAYNAVIGATIONAUDIO_OFFSET UNITYSDK_OFFSET(0x157806F0)

	class FHJDHMPLJKB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJDHMPLJKB_CTOR_OFFSET))(this);
		}

		::System::Void PlayNavigationAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJDHMPLJKB_PLAYNAVIGATIONAUDIO_OFFSET))(this);
		}

		::System::Void NavigationFailProcess(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + FHJDHMPLJKB_NAVIGATIONFAILPROCESS_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJDHMPLJKB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJDHMPLJKB_HADOHLNHHGB_OFFSET))(this);
		}

	};
