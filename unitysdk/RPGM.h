#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD424B0)

inline static constexpr unsigned int RPGM_TypeDefinitionIndex = 48617;

	class RPGM : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGM_CTOR_OFFSET))(this);
		}

	};
