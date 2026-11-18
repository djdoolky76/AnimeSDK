#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PriorityHeap_1_TypeDefinitionIndex = 26712;

	template <typename T>
	class PriorityHeap_1 : public ::System::Object
	{
	public:
		::System::Object* _leq; // 0x0
		::Il2CppArray<::System::Int32>* _nodes; // 0x0
		::Il2CppArray<::System::Object*>* _handles; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Boolean _initialized; // 0x0
	};
}
