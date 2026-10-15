#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define PFKHJCNEFCD_PDCNHBGAMAG_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define PFKHJCNEFCD_PDCNHBGAMAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36260)
#define PFKHJCNEFCD_PDCNHBGAMAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C36280)
#define PFKHJCNEFCD_PDCNHBGAMAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C3E770)

inline static constexpr unsigned int PFKHJCNEFCD_PDCNHBGAMAG_TypeDefinitionIndex = 14354;

	struct alignas(4) PFKHJCNEFCD_PDCNHBGAMAG
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_PDCNHBGAMAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_PDCNHBGAMAG_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::PFKHJCNEFCD_PDCNHBGAMAG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFKHJCNEFCD_PDCNHBGAMAG))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_PDCNHBGAMAG_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHJCNEFCD_PDCNHBGAMAG_GETHASHCODE_OFFSET))(this);
		}

	};
