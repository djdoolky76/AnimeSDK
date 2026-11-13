#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOCAMERAANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1B235DF0)

inline static constexpr unsigned int MonoCameraAnchor_TypeDefinitionIndex = 48594;

	class MonoCameraAnchor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCAMERAANCHOR_CTOR_OFFSET))(this);
		}

	};
