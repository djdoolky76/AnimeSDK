#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAIMPFOCKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8775E0)

inline static constexpr unsigned int AAIMPFOCKJC_TypeDefinitionIndex = 42336;

	class AAIMPFOCKJC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIMPFOCKJC_CTOR_OFFSET))(this);
		}

	};
