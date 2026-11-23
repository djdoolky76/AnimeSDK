#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_DEBUGGING_MONODEBUGCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x26CF7C0)

namespace ABC::Debugging
{
	inline static constexpr unsigned int MonoDebugCategory_TypeDefinitionIndex = 6653;

	class MonoDebugCategory : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* EnabledCategories; // 0x20
		::System::Boolean EnableFrameCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONODEBUGCATEGORY__CTOR_OFFSET))(this);
		}
	};
}
