#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLBAFJKCPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6132D0)

	class FCLBAFJKCPL : public ::System::Object
	{
	public:
		::System::UInt32 PCFCAJGANGJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBAFJKCPL_CTOR_OFFSET))(this);
		}

	};
