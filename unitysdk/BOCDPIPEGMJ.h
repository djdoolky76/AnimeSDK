#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BOCDPIPEGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B9FD0)

inline static constexpr unsigned int BOCDPIPEGMJ_TypeDefinitionIndex = 44708;

	class BOCDPIPEGMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCDPIPEGMJ_CTOR_OFFSET))(this);
		}

	};
