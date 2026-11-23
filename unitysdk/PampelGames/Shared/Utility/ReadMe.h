#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define PAMPELGAMES_SHARED_UTILITY_README__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace PampelGames::Shared::Utility
{
	inline static constexpr unsigned int ReadMe_TypeDefinitionIndex = 21167;

	class ReadMe : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* readMeText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_README__CTOR_OFFSET))(this);
		}
	};
}
