#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EBDEJIMKFNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B5CC0)

inline static constexpr unsigned int EBDEJIMKFNO_TypeDefinitionIndex = 48895;

	class EBDEJIMKFNO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDEJIMKFNO_CTOR_OFFSET))(this);
		}

	};
