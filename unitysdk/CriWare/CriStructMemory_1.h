#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Object.h"

namespace CriWare
{
	inline static constexpr unsigned int CriStructMemory_1_TypeDefinitionIndex = 39947;

	template <typename T>
	class CriStructMemory_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _bytes_k__BackingField; // 0x0
		::System::Runtime::InteropServices::GCHandle gch; // 0x0
	};
}
