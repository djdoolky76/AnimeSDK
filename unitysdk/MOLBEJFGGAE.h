#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLBEJFGGAE_CTOR_OFFSET UNITYSDK_OFFSET(0xC2F1B70)

inline static constexpr unsigned int MOLBEJFGGAE_TypeDefinitionIndex = 76209;

	class MOLBEJFGGAE : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLBEJFGGAE_CTOR_OFFSET))(this);
		}

	};
