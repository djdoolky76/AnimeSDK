#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define OCNCABENFIK_LMCKHGLOOMP_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define OCNCABENFIK_LMCKHGLOOMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36260)
#define OCNCABENFIK_LMCKHGLOOMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C36280)
#define OCNCABENFIK_LMCKHGLOOMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C3D6D0)

inline static constexpr unsigned int OCNCABENFIK_LMCKHGLOOMP_TypeDefinitionIndex = 14360;

	struct alignas(4) OCNCABENFIK_LMCKHGLOOMP
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + OCNCABENFIK_LMCKHGLOOMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNCABENFIK_LMCKHGLOOMP_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::OCNCABENFIK_LMCKHGLOOMP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCNCABENFIK_LMCKHGLOOMP))((::PBYTE)hIl2Cpp + OCNCABENFIK_LMCKHGLOOMP_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNCABENFIK_LMCKHGLOOMP_GETHASHCODE_OFFSET))(this);
		}

	};
