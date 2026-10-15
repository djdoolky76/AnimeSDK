#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNLDOKHCFAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA6550)

inline static constexpr unsigned int JNLDOKHCFAM_TypeDefinitionIndex = 43280;

	class JNLDOKHCFAM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLDOKHCFAM_CTOR_OFFSET))(this);
		}

	};
