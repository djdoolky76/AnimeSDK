#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIFBDBKNLBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1643AD70)
#define IIFBDBKNLBI_MDPBONJCHDL_OFFSET UNITYSDK_OFFSET(0x1643ACB0)

inline static constexpr unsigned int IIFBDBKNLBI_TypeDefinitionIndex = 68258;

	class IIFBDBKNLBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFBDBKNLBI_CTOR_OFFSET))(this);
		}

		::System::Void MDPBONJCHDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFBDBKNLBI_MDPBONJCHDL_OFFSET))(this);
		}

	};
