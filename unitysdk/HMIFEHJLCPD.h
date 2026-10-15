#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HMIFEHJLCPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAED0D0)

inline static constexpr unsigned int HMIFEHJLCPD_TypeDefinitionIndex = 42137;

	class HMIFEHJLCPD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIFEHJLCPD_CTOR_OFFSET))(this);
		}

	};
