#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DLBAMAJBEPB_CTOR_OFFSET UNITYSDK_OFFSET(0xF88B2E0)

inline static constexpr unsigned int DLBAMAJBEPB_TypeDefinitionIndex = 49777;

	class DLBAMAJBEPB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBAMAJBEPB_CTOR_OFFSET))(this);
		}

	};
