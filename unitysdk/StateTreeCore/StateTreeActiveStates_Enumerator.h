#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"

#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B5F70)
#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B5F80)
#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5F60)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeActiveStates_Enumerator_TypeDefinitionIndex = 30986;

	struct alignas(8) StateTreeActiveStates_Enumerator
	{
		::PVOID _states; // 0x10
		::System::Int32 _numStates; // 0x18
		::System::Int32 _index; // 0x1C

		::System::Void _ctor(::PVOID states, ::System::Int32 numStates)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR__CTOR_OFFSET))(this, states, numStates);
		}

		::StateTreeCore::StateTreeStateHandle get_Current()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
