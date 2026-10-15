#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HJGJAJFAGDI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D21910)

inline static constexpr unsigned int HJGJAJFAGDI_TypeDefinitionIndex = 66506;

	class HJGJAJFAGDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGJAJFAGDI_CTOR_OFFSET))(this);
		}

	};
