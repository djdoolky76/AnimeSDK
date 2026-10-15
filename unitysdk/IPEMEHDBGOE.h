#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKIKPOPLPJ.h"

#define IPEMEHDBGOE_CTOR_OFFSET UNITYSDK_OFFSET(0x16511300)

inline static constexpr unsigned int IPEMEHDBGOE_TypeDefinitionIndex = 57316;

	class IPEMEHDBGOE : public ::FHKIKPOPLPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEMEHDBGOE_CTOR_OFFSET))(this);
		}

	};
