#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define LGGGGGJFKMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D770)
#define LGGGGGJFKMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7D0)

inline static constexpr unsigned int LGGGGGJFKMI_TypeDefinitionIndex = 57913;

	struct alignas(4) LGGGGGJFKMI
	{
		::System::UInt32 CEGOPEIKDLA; // 0x10
		::RPG::GameCore::EventType GMPGDEINODK; // 0x14
		/*
		::System::Boolean Equals(::LGGGGGJFKMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGGGGGJFKMI))((::PBYTE)hIl2Cpp + LGGGGGJFKMI_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGGGJFKMI_GETHASHCODE_OFFSET))(this);
		}

	};
