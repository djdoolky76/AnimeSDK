#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSSTAGEGRDHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C1FB0)

inline static constexpr unsigned int PvsStageGrdHandle_TypeDefinitionIndex = 48430;

	class PvsStageGrdHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSSTAGEGRDHANDLE_CTOR_OFFSET))(this);
		}

	};
