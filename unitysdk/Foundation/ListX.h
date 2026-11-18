#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IList; }

#define FOUNDATION_LISTX_ILISTTORMTEXT_OFFSET UNITYSDK_OFFSET(0x1F37CD00)

namespace Foundation
{
	inline static constexpr unsigned int ListX_TypeDefinitionIndex = 8178;

	class ListX : public ::System::Object
	{
	public:
		static ::System::String* IListToRmText(::System::Collections::IList* list)
		{
			return ((::System::String*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + FOUNDATION_LISTX_ILISTTORMTEXT_OFFSET))(list);
		}
	};
}
