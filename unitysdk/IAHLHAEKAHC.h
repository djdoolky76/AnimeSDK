#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAHLHAEKAHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD7EC0)

inline static constexpr unsigned int IAHLHAEKAHC_TypeDefinitionIndex = 42539;

	class IAHLHAEKAHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHLHAEKAHC_CTOR_OFFSET))(this);
		}

	};
