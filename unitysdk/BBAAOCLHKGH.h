#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBAAOCLHKGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E74030)

inline static constexpr unsigned int BBAAOCLHKGH_TypeDefinitionIndex = 81646;

	class BBAAOCLHKGH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAAOCLHKGH_CTOR_OFFSET))(this);
		}

	};
