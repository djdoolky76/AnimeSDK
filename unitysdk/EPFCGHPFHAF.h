#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPFCGHPFHAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61E90)

inline static constexpr unsigned int EPFCGHPFHAF_TypeDefinitionIndex = 42361;

	class EPFCGHPFHAF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFCGHPFHAF_CTOR_OFFSET))(this);
		}

	};
