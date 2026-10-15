#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define AEDHLLMGANN_GFALKPIEIKO_CTOR_OFFSET UNITYSDK_OFFSET(0x11150)
#define AEDHLLMGANN_GFALKPIEIKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36990)
#define AEDHLLMGANN_GFALKPIEIKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C369B0)
#define AEDHLLMGANN_GFALKPIEIKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36980)

inline static constexpr unsigned int AEDHLLMGANN_GFALKPIEIKO_TypeDefinitionIndex = 14357;

	struct alignas(4) AEDHLLMGANN_GFALKPIEIKO
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + AEDHLLMGANN_GFALKPIEIKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDHLLMGANN_GFALKPIEIKO_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::AEDHLLMGANN_GFALKPIEIKO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEDHLLMGANN_GFALKPIEIKO))((::PBYTE)hIl2Cpp + AEDHLLMGANN_GFALKPIEIKO_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDHLLMGANN_GFALKPIEIKO_GETHASHCODE_OFFSET))(this);
		}

	};
