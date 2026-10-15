#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADONABAKPLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C878350)

inline static constexpr unsigned int ADONABAKPLO_TypeDefinitionIndex = 42981;

	class ADONABAKPLO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADONABAKPLO_CTOR_OFFSET))(this);
		}

	};
