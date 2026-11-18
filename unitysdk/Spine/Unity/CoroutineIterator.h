#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SPINE_UNITY_COROUTINEITERATOR_FROMNESTEDCALL_OFFSET UNITYSDK_OFFSET(0x97BF20)
#define SPINE_UNITY_COROUTINEITERATOR_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x8AD830)
#define SPINE_UNITY_COROUTINEITERATOR_GET_ISINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x5E6980)
#define SPINE_UNITY_COROUTINEITERATOR_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x52F9B0)
#define SPINE_UNITY_COROUTINEITERATOR_STATE_OFFSET UNITYSDK_OFFSET(0x97BEF0)
#define SPINE_UNITY_COROUTINEITERATOR_TONESTEDCALL_OFFSET UNITYSDK_OFFSET(0x97BF10)
#define SPINE_UNITY_COROUTINEITERATOR_YIELDRETURNATSTATE_OFFSET UNITYSDK_OFFSET(0x97BF00)
#define SPINE_UNITY_COROUTINEITERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5BD680)
#define SPINE_UNITY_COROUTINEITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

namespace Spine::Unity
{
	inline static constexpr unsigned int CoroutineIterator_TypeDefinitionIndex = 38217;

	struct alignas(4) CoroutineIterator
	{
		static ::Spine::Unity::CoroutineIterator* StaticGet_Done()
		{
			return (::Spine::Unity::CoroutineIterator*)Il2CppClass::FromTypeDefinitionIndex(CoroutineIterator_TypeDefinitionIndex)->GetStaticField(0x9EB0);
		}
		// static const ::System::UInt32 DoneState = 0xFFFFFFFF; // 0x0
		::System::UInt32 state; // 0x10

		::System::Void _ctor(::System::UInt32 state)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR__CTOR_OFFSET))(this, state);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsInitialState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_GET_ISINITIALSTATE_OFFSET))(this);
		}

		::System::UInt32 State(::System::UInt32 mask)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_STATE_OFFSET))(this, mask);
		}

		/*
		::Spine::Unity::CoroutineIterator NextState()
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_NEXTSTATE_OFFSET))(this);
		}
		*/

		/*
		::Spine::Unity::CoroutineIterator YieldReturnAtState(::System::UInt32 callerState, ::System::UInt32 mask)
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_YIELDRETURNATSTATE_OFFSET))(this, callerState, mask);
		}
		*/

		/*
		::Spine::Unity::CoroutineIterator ToNestedCall(::System::Int32 numCallerMaskBits)
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_TONESTEDCALL_OFFSET))(this, numCallerMaskBits);
		}
		*/

		/*
		::Spine::Unity::CoroutineIterator FromNestedCall(::System::UInt32 callerState, ::System::Int32 numCallerMaskBits)
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_COROUTINEITERATOR_FROMNESTEDCALL_OFFSET))(this, callerState, numCallerMaskBits);
		}
		*/
	};
}
