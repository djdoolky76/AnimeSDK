#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define DNPJHONJKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB33A20)

inline static constexpr unsigned int DNPJHONJKGD_TypeDefinitionIndex = 43257;

	class DNPJHONJKGD : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> MIAJNJNECOG; // 0x10
		::System::Boolean EGCIBPJLOKM; // 0x18
		::System::Byte _padding0[0x3];
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> MCLLALGABAB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPJHONJKGD_CTOR_OFFSET))(this);
		}

	};
