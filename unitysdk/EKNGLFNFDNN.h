#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EKNGLFNFDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x199992B0)

inline static constexpr unsigned int EKNGLFNFDNN_TypeDefinitionIndex = 72208;

	class EKNGLFNFDNN : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNGLFNFDNN_CTOR_OFFSET))(this);
		}

	};
