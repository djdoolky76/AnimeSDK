#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CustomEventBehaviour; }
namespace System { class Object; }

#define ONEGHOPELAC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF51170)
#define ONEGHOPELAC_EADFDEIGJPL_OFFSET UNITYSDK_OFFSET(0xBF51130)
#define ONEGHOPELAC_GJGPBPKLBEH_OFFSET UNITYSDK_OFFSET(0xBF51050)
#define ONEGHOPELAC_HIILCILKBHK_OFFSET UNITYSDK_OFFSET(0xBF510A0)
#define ONEGHOPELAC_OGAMKOFFLGK_OFFSET UNITYSDK_OFFSET(0xBF510E0)
#define ONEGHOPELAC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBF508C0)

	class ONEGHOPELAC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double CKGKCODHELK; // 0x10
		::System::Double FMJELBLPMIA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGHOPELAC_CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ONEGHOPELAC_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GJGPBPKLBEH(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ONEGHOPELAC_GJGPBPKLBEH_OFFSET))(this, a1);
		}

		::System::Void HIILCILKBHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGHOPELAC_HIILCILKBHK_OFFSET))(this);
		}

		::System::Void OGAMKOFFLGK(::RPGTools::Timeline::CustomEventBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + ONEGHOPELAC_OGAMKOFFLGK_OFFSET))(this, a1);
		}

		::System::Void EADFDEIGJPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEGHOPELAC_EADFDEIGJPL_OFFSET))(this);
		}

	};
