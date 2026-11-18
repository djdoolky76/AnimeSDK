#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_RecordHeader__m_StateWithControlIndex_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_RecordHeader__m_StateWithoutControlIndex_e__FixedBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDHEADER_GET_STATEPTRWITHCONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x91A010)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDHEADER_GET_STATEPTRWITHOUTCONTROLINDEX_OFFSET UNITYSDK_OFFSET(0x91A020)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateHistory_RecordHeader_TypeDefinitionIndex = 32020;

	struct alignas(4) InputStateHistory_RecordHeader
	{
		// static const ::System::Int32 kSizeWithControlIndex = 0x10; // 0x0
		// static const ::System::Int32 kSizeWithoutControlIndex = 0xC; // 0x0
		::System::Double time; // 0x10
		::System::UInt32 version; // 0x18
		::System::Int32 controlIndex; // 0x1C
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader__m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader__m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex; // 0x20

		::PVOID get_statePtrWithControlIndex()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDHEADER_GET_STATEPTRWITHCONTROLINDEX_OFFSET))(this);
		}

		::PVOID get_statePtrWithoutControlIndex()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDHEADER_GET_STATEPTRWITHOUTCONTROLINDEX_OFFSET))(this);
		}
	};
}
