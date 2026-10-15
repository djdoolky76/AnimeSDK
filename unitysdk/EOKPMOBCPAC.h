#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EOKPMOBCPAC_CTOR_OFFSET UNITYSDK_OFFSET(0x155B90D0)

inline static constexpr unsigned int EOKPMOBCPAC_TypeDefinitionIndex = 81271;

	class EOKPMOBCPAC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKPMOBCPAC_CTOR_OFFSET))(this);
		}

	};
