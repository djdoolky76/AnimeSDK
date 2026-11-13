#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KJMCNGNCOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x19F1CC30)

inline static constexpr unsigned int KJMCNGNCOLP_TypeDefinitionIndex = 59784;

	class KJMCNGNCOLP : public ::System::Object
	{
	public:
		::System::UInt32 PKPCLKDCMCH; // 0x10
		::System::Int32 AHGLPBAJMOA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCNGNCOLP_CTOR_OFFSET))(this);
		}

	};
