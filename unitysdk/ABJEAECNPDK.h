#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABJEAECNPDK_PKOCDCNOAKH_OFFSET UNITYSDK_OFFSET(0x1C552AB0)

inline static constexpr unsigned int ABJEAECNPDK_TypeDefinitionIndex = 36395;

	class ABJEAECNPDK : public ::System::Object
	{
	public:
		static ::System::String* PKOCDCNOAKH(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ABJEAECNPDK_PKOCDCNOAKH_OFFSET))(a1);
		}

	};
