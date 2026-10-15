#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EBDEJIMKFNO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CECE90)

inline static constexpr unsigned int EBDEJIMKFNO_TypeDefinitionIndex = 47864;

	class EBDEJIMKFNO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDEJIMKFNO_CTOR_OFFSET))(this);
		}

	};
