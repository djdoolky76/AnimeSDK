#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKKEFCINGAA_CTOR_OFFSET UNITYSDK_OFFSET(0xC51D830)

inline static constexpr unsigned int NKKEFCINGAA_TypeDefinitionIndex = 77088;

	class NKKEFCINGAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKEFCINGAA_CTOR_OFFSET))(this);
		}

	};
