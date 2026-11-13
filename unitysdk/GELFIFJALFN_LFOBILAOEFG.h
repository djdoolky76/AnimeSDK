#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define GELFIFJALFN_LFOBILAOEFG_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define GELFIFJALFN_LFOBILAOEFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EE9210)
#define GELFIFJALFN_LFOBILAOEFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3EE92E0)
#define GELFIFJALFN_LFOBILAOEFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F29810)

inline static constexpr unsigned int GELFIFJALFN_LFOBILAOEFG_TypeDefinitionIndex = 14505;

	struct alignas(4) GELFIFJALFN_LFOBILAOEFG
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + GELFIFJALFN_LFOBILAOEFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELFIFJALFN_LFOBILAOEFG_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::GELFIFJALFN_LFOBILAOEFG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GELFIFJALFN_LFOBILAOEFG))((::PBYTE)hIl2Cpp + GELFIFJALFN_LFOBILAOEFG_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELFIFJALFN_LFOBILAOEFG_GETHASHCODE_OFFSET))(this);
		}

	};
