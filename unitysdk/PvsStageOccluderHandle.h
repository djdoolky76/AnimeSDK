#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PVSSTAGEOCCLUDERHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCCD2810)

inline static constexpr unsigned int PvsStageOccluderHandle_TypeDefinitionIndex = 48431;

	class PvsStageOccluderHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Budget; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSSTAGEOCCLUDERHANDLE_CTOR_OFFSET))(this);
		}

	};
