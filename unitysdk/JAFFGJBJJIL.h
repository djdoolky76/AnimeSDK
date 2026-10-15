#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define JAFFGJBJJIL_CTOR_OFFSET UNITYSDK_OFFSET(0x16541C30)

	class JAFFGJBJJIL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFFGJBJJIL_CTOR_OFFSET))(this);
		}

	};
