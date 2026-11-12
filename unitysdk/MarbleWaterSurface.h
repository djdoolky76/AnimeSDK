#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MARBLEWATERSURFACE_CTOR_OFFSET UNITYSDK_OFFSET(0xC30A590)

inline static constexpr unsigned int MarbleWaterSurface_TypeDefinitionIndex = 48168;

	class MarbleWaterSurface : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLEWATERSURFACE_CTOR_OFFSET))(this);
		}

	};
