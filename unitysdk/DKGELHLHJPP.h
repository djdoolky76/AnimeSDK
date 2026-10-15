#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DKGELHLHJPP_CTOR_OFFSET UNITYSDK_OFFSET(0xF87B090)

inline static constexpr unsigned int DKGELHLHJPP_TypeDefinitionIndex = 48277;

	class DKGELHLHJPP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGELHLHJPP_CTOR_OFFSET))(this);
		}

	};
