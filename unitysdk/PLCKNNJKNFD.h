#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLCKNNJKNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x20700390)

inline static constexpr unsigned int PLCKNNJKNFD_TypeDefinitionIndex = 43144;

	class PLCKNNJKNFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCKNNJKNFD_CTOR_OFFSET))(this);
		}

	};
