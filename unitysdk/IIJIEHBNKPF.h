#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIJIEHBNKPF_CTOR_OFFSET UNITYSDK_OFFSET(0x193D1F20)

inline static constexpr unsigned int IIJIEHBNKPF_TypeDefinitionIndex = 84050;

	class IIJIEHBNKPF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJIEHBNKPF_CTOR_OFFSET))(this);
		}

	};
