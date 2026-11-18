#pragma once
#include "unitysdk/unitysdk.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED7940)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObject_TypeDefinitionIndex = 45110;

	class ViewObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT__CTOR_OFFSET))(this);
		}
	};
}
