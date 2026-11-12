#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NOTPATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D664FA0)

inline static constexpr unsigned int NotPatch_TypeDefinitionIndex = 5602;

	class NotPatch : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTPATCH_CTOR_OFFSET))(this);
		}

	};
