#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GHLNPFDIJLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63CF30)

	class GHLNPFDIJLF : public ::System::Object
	{
	public:
		::System::UInt32 GEJCNGGABEL; // 0x10
		::System::Int32 GMDBHJKEAEI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLNPFDIJLF_CTOR_OFFSET))(this);
		}

	};
