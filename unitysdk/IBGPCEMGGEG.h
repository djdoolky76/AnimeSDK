#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define IBGPCEMGGEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E27F70)

inline static constexpr unsigned int IBGPCEMGGEG_TypeDefinitionIndex = 61267;

	class IBGPCEMGGEG : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGPCEMGGEG_CTOR_OFFSET))(this);
		}

	};
