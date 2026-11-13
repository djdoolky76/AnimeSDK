#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DLBAMAJBEPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1865EC20)

inline static constexpr unsigned int DLBAMAJBEPB_TypeDefinitionIndex = 50825;

	class DLBAMAJBEPB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBAMAJBEPB_CTOR_OFFSET))(this);
		}

	};
