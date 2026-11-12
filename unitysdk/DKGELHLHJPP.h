#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DKGELHLHJPP_CTOR_OFFSET UNITYSDK_OFFSET(0xFFE0CB0)

inline static constexpr unsigned int DKGELHLHJPP_TypeDefinitionIndex = 49318;

	class DKGELHLHJPP : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGELHLHJPP_CTOR_OFFSET))(this);
		}

	};
