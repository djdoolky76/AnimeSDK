#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOBPMJGAKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB787A0)

inline static constexpr unsigned int JOBPMJGAKEL_TypeDefinitionIndex = 42959;

	class JOBPMJGAKEL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBPMJGAKEL_CTOR_OFFSET))(this);
		}

	};
