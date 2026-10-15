#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HJLFGJNMPPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E7EAC0)

inline static constexpr unsigned int HJLFGJNMPPC_TypeDefinitionIndex = 71104;

	struct alignas(4) HJLFGJNMPPC
	{
		::UnityEngine::Vector3 NNACKOBKFGE; // 0x10
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJLFGJNMPPC_EXECUTE_OFFSET))(this, a1);
		}

	};
