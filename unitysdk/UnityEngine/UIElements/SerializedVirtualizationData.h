#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_UIELEMENTS_SERIALIZEDVIRTUALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int SerializedVirtualizationData_TypeDefinitionIndex = 13151;

	class SerializedVirtualizationData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 scrollOffset; // 0x10
		::System::Int32 firstVisibleIndex; // 0x18
		::System::Single contentPadding; // 0x1C
		::System::Single contentHeight; // 0x20
		::System::Int32 anchoredItemIndex; // 0x24
		::System::Single anchorOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SERIALIZEDVIRTUALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
