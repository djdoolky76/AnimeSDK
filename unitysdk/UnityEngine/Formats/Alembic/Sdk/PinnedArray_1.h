#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	template <typename T>
	class PinnedArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_data; // 0x0
		::System::Runtime::InteropServices::GCHandle m_gch; // 0x0
	};
}
