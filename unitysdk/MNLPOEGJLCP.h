#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNLPOEGJLCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2D61A0)

inline static constexpr unsigned int MNLPOEGJLCP_TypeDefinitionIndex = 74953;

	class MNLPOEGJLCP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLPOEGJLCP_CTOR_OFFSET))(this);
		}

	};
