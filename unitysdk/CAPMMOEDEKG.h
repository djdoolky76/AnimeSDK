#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAPMMOEDEKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC495CC0)

inline static constexpr unsigned int CAPMMOEDEKG_TypeDefinitionIndex = 81266;

	class CAPMMOEDEKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPMMOEDEKG_CTOR_OFFSET))(this);
		}

	};
