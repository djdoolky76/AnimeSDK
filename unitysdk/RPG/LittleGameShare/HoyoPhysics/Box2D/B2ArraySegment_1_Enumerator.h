#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArraySegment_1_Enumerator_TypeDefinitionIndex = 36581;

	template <typename T>
	struct alignas(8) B2ArraySegment_1_Enumerator
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _start; // 0x0
		::System::Int32 _end; // 0x0
		::System::Int32 _current; // 0x0
	};
}
