#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPECHLLBAHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5C790)

inline static constexpr unsigned int BPECHLLBAHH_TypeDefinitionIndex = 44722;

	class BPECHLLBAHH : public ::System::Object
	{
	public:
		::System::Int32 KDHPKOFLNFM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPECHLLBAHH_CTOR_OFFSET))(this);
		}

	};
