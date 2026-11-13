#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SETTRANSFORMONSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC31220)
#define SETTRANSFORMONSTART_START_OFFSET UNITYSDK_OFFSET(0x1AC311A0)

inline static constexpr unsigned int SetTransformOnStart_TypeDefinitionIndex = 48622;

	class SetTransformOnStart : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTRANSFORMONSTART_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTRANSFORMONSTART_START_OFFSET))(this);
		}

	};
