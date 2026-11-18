#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNREALTYPES_OBJECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD6B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectItem_TypeDefinitionIndex = 27763;

	class ObjectItem : public ::System::Object
	{
	public:
		::System::Object* Object; // 0x10
		::System::Int32 SerialNumber; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTITEM__CTOR_OFFSET))(this);
		}
	};
}
