#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPHDHBAADE.h"

#define FCAOIABPCJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA0F30)

inline static constexpr unsigned int FCAOIABPCJL_TypeDefinitionIndex = 25023;

	class FCAOIABPCJL : public ::PJPHDHBAADE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOIABPCJL_CTOR_OFFSET))(this);
		}

	};
