#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAPSCROLLVIEW_DATASTRUCT_EMPTYRUNTIMEMUTATIONSERVICE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x13C22340)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYRUNTIMEMUTATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C22350)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int EmptyRuntimeMutationService_TypeDefinitionIndex = 72730;

	class EmptyRuntimeMutationService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYRUNTIMEMUTATIONSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYRUNTIMEMUTATIONSERVICE_SET_ENABLED_OFFSET))(this, value);
		}
	};
}
