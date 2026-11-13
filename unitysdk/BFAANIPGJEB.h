#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFAANIPGJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x17025150)

inline static constexpr unsigned int BFAANIPGJEB_TypeDefinitionIndex = 37134;

	class BFAANIPGJEB : public ::System::Object
	{
	public:
		::System::Single EHOIKFCAIKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAANIPGJEB_CTOR_OFFSET))(this);
		}

	};
