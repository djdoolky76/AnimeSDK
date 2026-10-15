#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define LJKHNIGEEBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F2EE0)

inline static constexpr unsigned int LJKHNIGEEBD_TypeDefinitionIndex = 5083;

	class LJKHNIGEEBD : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHNIGEEBD_CTOR_OFFSET))(this);
		}

	};
