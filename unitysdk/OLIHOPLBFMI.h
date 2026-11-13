#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OLIHOPLBFMI_CTOR_OFFSET UNITYSDK_OFFSET(0x178AC6B0)

inline static constexpr unsigned int OLIHOPLBFMI_TypeDefinitionIndex = 50112;

	class OLIHOPLBFMI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIHOPLBFMI_CTOR_OFFSET))(this);
		}

	};
