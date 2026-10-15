#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }

#define MIDEBCKDIJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB951CB0)
#define MIDEBCKDIJK_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB951BF0)

	class MIDEBCKDIJK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* BJCBMNHOAGO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDEBCKDIJK_CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MIDEBCKDIJK_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

	};
