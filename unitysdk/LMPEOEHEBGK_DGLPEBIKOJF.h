#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define LMPEOEHEBGK_DGLPEBIKOJF_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define LMPEOEHEBGK_DGLPEBIKOJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36260)
#define LMPEOEHEBGK_DGLPEBIKOJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C36280)
#define LMPEOEHEBGK_DGLPEBIKOJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C3CB90)

inline static constexpr unsigned int LMPEOEHEBGK_DGLPEBIKOJF_TypeDefinitionIndex = 14345;

	struct alignas(4) LMPEOEHEBGK_DGLPEBIKOJF
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_DGLPEBIKOJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_DGLPEBIKOJF_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::LMPEOEHEBGK_DGLPEBIKOJF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMPEOEHEBGK_DGLPEBIKOJF))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_DGLPEBIKOJF_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPEOEHEBGK_DGLPEBIKOJF_GETHASHCODE_OFFSET))(this);
		}

	};
