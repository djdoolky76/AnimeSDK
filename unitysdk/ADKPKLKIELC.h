#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ADKPKLKIELC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01DBF0)

inline static constexpr unsigned int ADKPKLKIELC_TypeDefinitionIndex = 25479;

	class ADKPKLKIELC : public ::System::Attribute
	{
	public:
		::System::Boolean OBGIIECKLEC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKPKLKIELC_CTOR_OFFSET))(this);
		}

	};
