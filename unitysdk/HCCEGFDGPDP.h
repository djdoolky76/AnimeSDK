#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define HCCEGFDGPDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A9CD0)

inline static constexpr unsigned int HCCEGFDGPDP_TypeDefinitionIndex = 49234;

	class HCCEGFDGPDP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCEGFDGPDP_CTOR_OFFSET))(this);
		}

	};
