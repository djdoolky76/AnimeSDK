#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
namespace System { class String; }

#define KDLJHIJDOAG_EFIGDFDACHI_CTOR_OFFSET UNITYSDK_OFFSET(0x11150)
#define KDLJHIJDOAG_EFIGDFDACHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C36990)
#define KDLJHIJDOAG_EFIGDFDACHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C369B0)
#define KDLJHIJDOAG_EFIGDFDACHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C3BFD0)

inline static constexpr unsigned int KDLJHIJDOAG_EFIGDFDACHI_TypeDefinitionIndex = 14342;

	struct alignas(4) KDLJHIJDOAG_EFIGDFDACHI
	{
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
		::System::UInt32 HNPDLANHONH; // 0x14
		::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_EFIGDFDACHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_EFIGDFDACHI_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::KDLJHIJDOAG_EFIGDFDACHI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDLJHIJDOAG_EFIGDFDACHI))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_EFIGDFDACHI_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLJHIJDOAG_EFIGDFDACHI_GETHASHCODE_OFFSET))(this);
		}

	};
