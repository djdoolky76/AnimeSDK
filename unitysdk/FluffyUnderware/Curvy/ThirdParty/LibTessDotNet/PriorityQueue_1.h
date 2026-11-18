#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class PriorityHeap_1; }

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int PriorityQueue_1_TypeDefinitionIndex = 28476;

	template <typename T>
	class PriorityQueue_1 : public ::System::Object
	{
	public:
		::System::Object* _leq; // 0x0
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityHeap_1<T>* _heap; // 0x0
		::Il2CppArray<T>* _keys; // 0x0
		::Il2CppArray<::System::Int32>* _order; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Boolean _initialized; // 0x0
	};
}
