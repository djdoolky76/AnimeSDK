#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define IFCFJFOGEML_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFD7E0)

inline static constexpr unsigned int IFCFJFOGEML_TypeDefinitionIndex = 48244;

	class IFCFJFOGEML : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCFJFOGEML_CTOR_OFFSET))(this);
		}

	};
