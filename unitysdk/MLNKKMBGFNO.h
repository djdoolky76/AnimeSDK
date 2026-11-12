#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPDKJKJGECM;
class FLJEGMGCIOG;

#define MLNKKMBGFNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D11C0)

inline static constexpr unsigned int MLNKKMBGFNO_TypeDefinitionIndex = 38173;

	class MLNKKMBGFNO : public ::System::Object
	{
	public:
		::BPDKJKJGECM* GJBOKLDCKEG; // 0x10
		::FLJEGMGCIOG* MOBBFEJHBGC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNKKMBGFNO_CTOR_OFFSET))(this);
		}

	};
