#pragma once
#include "unitysdk/unitysdk.h"

#define ABC_AUDIO_AUDIOABCMONOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x22AE340)

namespace ABC::Audio
{
	inline static constexpr unsigned int AudioABCMonoBehavior_TypeDefinitionIndex = 7132;

	class AudioABCMonoBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_AUDIO_AUDIOABCMONOBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
