#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KJMCNGNCOLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB45BB30)

inline static constexpr unsigned int KJMCNGNCOLP_TypeDefinitionIndex = 58520;

	class KJMCNGNCOLP : public ::System::Object
	{
	public:
		::System::Int32 AHGLPBAJMOA; // 0x10
		::System::UInt32 PKPCLKDCMCH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCNGNCOLP_CTOR_OFFSET))(this);
		}

	};
