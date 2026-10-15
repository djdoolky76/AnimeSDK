#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BAOIFDFAILN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F0410)

inline static constexpr unsigned int BAOIFDFAILN_TypeDefinitionIndex = 5077;

	class BAOIFDFAILN : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOIFDFAILN_CTOR_OFFSET))(this);
		}

	};
