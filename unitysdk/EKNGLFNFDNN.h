#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EKNGLFNFDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15503A70)

inline static constexpr unsigned int EKNGLFNFDNN_TypeDefinitionIndex = 70242;

	class EKNGLFNFDNN : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNGLFNFDNN_CTOR_OFFSET))(this);
		}

	};
