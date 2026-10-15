#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FFDPILCDNLE_FFFFHODFBFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15733160)

inline static constexpr unsigned int FFDPILCDNLE_FFFFHODFBFK_TypeDefinitionIndex = 67787;

	class FFDPILCDNLE_FFFFHODFBFK : public ::System::Object
	{
	public:
		::System::Boolean IsLike; // 0x10
		::System::Byte _padding0[0x7];
		::System::UInt64 LikeCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPILCDNLE_FFFFHODFBFK_CTOR_OFFSET))(this);
		}

	};
