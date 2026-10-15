#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JMNHIINAMON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB75050)

inline static constexpr unsigned int JMNHIINAMON_TypeDefinitionIndex = 42378;

	class JMNHIINAMON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHIINAMON_CTOR_OFFSET))(this);
		}

	};
