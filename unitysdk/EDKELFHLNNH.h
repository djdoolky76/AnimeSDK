#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EDKELFHLNNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD70F20)

inline static constexpr unsigned int EDKELFHLNNH_TypeDefinitionIndex = 25031;

	class EDKELFHLNNH : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKELFHLNNH_CTOR_OFFSET))(this);
		}

	};
