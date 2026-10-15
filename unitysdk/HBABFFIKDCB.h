#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HBABFFIKDCB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9E730)

inline static constexpr unsigned int HBABFFIKDCB_TypeDefinitionIndex = 58521;

	class HBABFFIKDCB : public ::System::Object
	{
	public:
		::System::UInt32 PKPCLKDCMCH; // 0x10
		::System::Boolean KLNBEHCHGIG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBABFFIKDCB_CTOR_OFFSET))(this);
		}

	};
