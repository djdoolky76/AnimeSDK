#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define FHFJBKNCPMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1576E180)

inline static constexpr unsigned int FHFJBKNCPMB_TypeDefinitionIndex = 48270;

	class FHFJBKNCPMB : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFJBKNCPMB_CTOR_OFFSET))(this);
		}

	};
