#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLBEJFGGAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2DA60)

inline static constexpr unsigned int MOLBEJFGGAE_TypeDefinitionIndex = 74062;

	class MOLBEJFGGAE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLBEJFGGAE_CTOR_OFFSET))(this);
		}

	};
