#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLIHOPLBFMI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0D510)

	class OLIHOPLBFMI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIHOPLBFMI_CTOR_OFFSET))(this);
		}

	};
