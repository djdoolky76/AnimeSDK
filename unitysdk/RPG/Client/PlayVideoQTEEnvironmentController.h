#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_BEGINPLAYBACK_OFFSET UNITYSDK_OFFSET(0x1E2A9700)
#define RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A94E0)
#define RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2A9910)
#define RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_ENTER_OFFSET UNITYSDK_OFFSET(0x1E2A9500)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTEEnvironmentController_TypeDefinitionIndex = 74936;

	class PlayVideoQTEEnvironmentController : public ::System::Object
	{
	public:
		::System::UInt32 _VideoID; // 0x10
		::System::Boolean _PlaybackStarted; // 0x14
		::System::Boolean _MuteBGM; // 0x15
		::System::Byte _padding0[0x2];
		::RPG::Client::LockSource _LockSource; // 0x18
		::System::Boolean _Disposed; // 0x1C
		::System::Boolean _MuteBGMWithFadeOut; // 0x1D
		::System::Boolean _Entered; // 0x1E
		::System::Boolean _BgmMuted; // 0x1F
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_ENTER_OFFSET))(this);
		}

		::System::Void BeginPlayback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_BEGINPLAYBACK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEENVIRONMENTCONTROLLER_DISPOSE_OFFSET))(this);
		}

	};
}
