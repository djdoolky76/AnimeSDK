#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Formats::Alembic::Sdk
{
	template <typename T>
	class PinnedList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* m_list; // 0x0
		::Il2CppArray<T>* m_data; // 0x0
		::System::Runtime::InteropServices::GCHandle m_gch; // 0x0
	};
}
