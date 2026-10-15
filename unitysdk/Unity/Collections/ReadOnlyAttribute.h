#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_COLLECTIONS_READONLYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CC200)

namespace Unity::Collections
{
	class ReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_READONLYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
