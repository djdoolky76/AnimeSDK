#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKJEJCFGKNJ.h"

#define DABBFHEANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1993BEF0)
#define DABBFHEANCE_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0x1993BD70)

inline static constexpr unsigned int DABBFHEANCE_TypeDefinitionIndex = 70893;

	class DABBFHEANCE : public ::FKJEJCFGKNJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABBFHEANCE_CTOR_OFFSET))(this);
		}

		::System::Void DNFGFHMNDEF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DABBFHEANCE_DNFGFHMNDEF_OFFSET))(this, a1);
		}

	};
