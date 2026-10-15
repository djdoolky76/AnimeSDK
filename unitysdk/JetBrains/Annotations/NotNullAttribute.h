#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JETBRAINS_ANNOTATIONS_NOTNULLATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CB6C0)

namespace JetBrains::Annotations
{
	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JETBRAINS_ANNOTATIONS_NOTNULLATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
