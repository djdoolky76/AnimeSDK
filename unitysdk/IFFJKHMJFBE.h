#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFFJKHMJFBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C69A050)

inline static constexpr unsigned int IFFJKHMJFBE_TypeDefinitionIndex = 36440;

	class IFFJKHMJFBE : public ::System::Object
	{
	public:
		::System::Int32 JIAOEIMMPBB; // 0x10
		::System::UInt32 CABBFBKCBCE; // 0x14
		::System::Int32 OGKKJKFNCFL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFJKHMJFBE_CTOR_OFFSET))(this);
		}

	};
