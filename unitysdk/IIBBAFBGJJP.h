#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define IIBBAFBGJJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76C80)

inline static constexpr unsigned int IIBBAFBGJJP_TypeDefinitionIndex = 42248;

	class IIBBAFBGJJP : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> GLIIBKFEMFE; // 0x10
		::System::Byte _padding0[0x4];
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> FDHPGMENKCD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBBAFBGJJP_CTOR_OFFSET))(this);
		}

	};
