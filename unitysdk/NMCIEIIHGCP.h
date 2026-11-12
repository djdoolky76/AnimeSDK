#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMCIEIIHGCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB31E00)

inline static constexpr unsigned int NMCIEIIHGCP_TypeDefinitionIndex = 43118;

	class NMCIEIIHGCP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIEIIHGCP_CTOR_OFFSET))(this);
		}

	};
