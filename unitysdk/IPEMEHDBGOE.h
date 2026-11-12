#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKIKPOPLPJ.h"

#define IPEMEHDBGOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB853F20)

inline static constexpr unsigned int IPEMEHDBGOE_TypeDefinitionIndex = 58544;

	class IPEMEHDBGOE : public ::FHKIKPOPLPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEMEHDBGOE_CTOR_OFFSET))(this);
		}

	};
