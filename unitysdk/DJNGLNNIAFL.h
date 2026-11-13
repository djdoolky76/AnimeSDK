#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DJNGLNNIAFL_CTOR_OFFSET UNITYSDK_OFFSET(0x18BF5290)

inline static constexpr unsigned int DJNGLNNIAFL_TypeDefinitionIndex = 65789;

	class DJNGLNNIAFL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNGLNNIAFL_CTOR_OFFSET))(this);
		}

	};
