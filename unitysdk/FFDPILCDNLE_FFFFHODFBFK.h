#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FFDPILCDNLE_FFFFHODFBFK_CTOR_OFFSET UNITYSDK_OFFSET(0x157278F0)

inline static constexpr unsigned int FFDPILCDNLE_FFFFHODFBFK_TypeDefinitionIndex = 67787;

	class FFDPILCDNLE_FFFFHODFBFK : public ::System::Object
	{
	public:
		::System::UInt64 LikeCount; // 0x10
		::System::Boolean IsLike; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDPILCDNLE_FFFFHODFBFK_CTOR_OFFSET))(this);
		}

	};
