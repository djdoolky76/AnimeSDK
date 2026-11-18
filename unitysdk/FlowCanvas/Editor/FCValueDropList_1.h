#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Editor
{
	inline static constexpr unsigned int FCValueDropList_1_TypeDefinitionIndex = 30077;

	template <typename T>
	class FCValueDropList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* m_Options; // 0x0
		::System::Int32 m_Selected; // 0x0
		T m_Value; // 0x0
		::System::Object* Converter; // 0x0
	};
}
