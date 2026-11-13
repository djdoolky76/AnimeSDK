#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNLDOKHCFAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE20E90)

inline static constexpr unsigned int JNLDOKHCFAM_TypeDefinitionIndex = 44261;

	class JNLDOKHCFAM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLDOKHCFAM_CTOR_OFFSET))(this);
		}

	};
