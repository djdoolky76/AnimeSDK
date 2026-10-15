#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define DNPJHONJKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2FDC0)

inline static constexpr unsigned int DNPJHONJKGD_TypeDefinitionIndex = 42282;

	class DNPJHONJKGD : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> MCLLALGABAB; // 0x10
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> MIAJNJNECOG; // 0x18
		::System::Boolean EGCIBPJLOKM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPJHONJKGD_CTOR_OFFSET))(this);
		}

	};
