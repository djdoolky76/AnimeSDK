#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFNMABCCOEB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FAvatarInOutAreaCategory_TypeDefinitionIndex = 43385;

	struct alignas(8) FAvatarInOutAreaCategory
	{
		::KFNMABCCOEB AreaCategoryType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SceneNameId; // 0x18
		::System::Boolean IsEntering; // 0x20
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::String*>* AreaTagList; // 0x28
	};
}
