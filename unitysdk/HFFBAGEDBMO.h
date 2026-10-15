#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define HFFBAGEDBMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C76A00)

inline static constexpr unsigned int HFFBAGEDBMO_TypeDefinitionIndex = 48178;

	class HFFBAGEDBMO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFBAGEDBMO_CTOR_OFFSET))(this);
		}

	};
