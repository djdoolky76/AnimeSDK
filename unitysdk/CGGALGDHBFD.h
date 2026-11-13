#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CGGALGDHBFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1785C3A0)

inline static constexpr unsigned int CGGALGDHBFD_TypeDefinitionIndex = 81983;

	class CGGALGDHBFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGALGDHBFD_CTOR_OFFSET))(this);
		}

	};
