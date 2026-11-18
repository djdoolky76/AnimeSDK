#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COLUMNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x105F5080)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdVerticalAtlas_ColumnData_TypeDefinitionIndex = 76813;

	class NPCCrowdVerticalAtlas_ColumnData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* freeRegions; // 0x10
		::System::Int32 allocatedHeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COLUMNDATA__CTOR_OFFSET))(this);
		}
	};
}
