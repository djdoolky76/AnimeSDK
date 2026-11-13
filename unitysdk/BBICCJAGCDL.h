#pragma once
#include "unitysdk/unitysdk.h"

#define BBICCJAGCDL_CTOR_OFFSET UNITYSDK_OFFSET(0x199F9250)
#define BBICCJAGCDL_FGHLAGJJMKC_OFFSET UNITYSDK_OFFSET(0x199F9260)

inline static constexpr unsigned int BBICCJAGCDL_TypeDefinitionIndex = 60332;

	class BBICCJAGCDL
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBICCJAGCDL_CTOR_OFFSET))(this, a1);
		}

		::System::Void FGHLAGJJMKC(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BBICCJAGCDL_FGHLAGJJMKC_OFFSET))(this, a1, a2);
		}

	};
