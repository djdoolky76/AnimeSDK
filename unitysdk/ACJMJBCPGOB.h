#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ACJMJBCPGOB_CTOR_OFFSET UNITYSDK_OFFSET(0x18292DD0)

inline static constexpr unsigned int ACJMJBCPGOB_TypeDefinitionIndex = 50401;

	class ACJMJBCPGOB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJMJBCPGOB_CTOR_OFFSET))(this);
		}

	};
