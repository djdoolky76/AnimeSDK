#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define JEOEOLCIPCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB98ABC0)

inline static constexpr unsigned int JEOEOLCIPCF_TypeDefinitionIndex = 49120;

	class JEOEOLCIPCF : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOEOLCIPCF_CTOR_OFFSET))(this);
		}

	};
