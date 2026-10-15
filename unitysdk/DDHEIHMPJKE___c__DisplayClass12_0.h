#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
class EKAFJOGBCFA;

#define DDHEIHMPJKE___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE2652F0)
#define DDHEIHMPJKE___C__DISPLAYCLASS12_0___ONTIMELINEBIND_B__0_OFFSET UNITYSDK_OFFSET(0xE265300)

	class DDHEIHMPJKE___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::Playables::PlayableBinding playableBinding; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHEIHMPJKE___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnTimelineBind_b__0(::EKAFJOGBCFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKAFJOGBCFA*))((::PBYTE)hIl2Cpp + DDHEIHMPJKE___C__DISPLAYCLASS12_0___ONTIMELINEBIND_B__0_OFFSET))(this, a1);
		}

	};
