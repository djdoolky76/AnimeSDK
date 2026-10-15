#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define DBECCIJEBLI_CTOR_OFFSET UNITYSDK_OFFSET(0xDFDD180)

	class DBECCIJEBLI : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBECCIJEBLI_CTOR_OFFSET))(this);
		}

	};
